#include <gtest/gtest.h>

#include <iostream>
// Copyright 2023 Mark Verbeek

#include "inc/ext/rapidcsv.h"
#include "test/test_data.h"

#define EMPTY 0
#define WALL -1

namespace rapidcsv {
template <>
void Converter<int>::ToVal(const std::string& pStr,
                           int& pVal) const {  // NOLINT
  switch (pStr[0]) {
    case '.':
      pVal = static_cast<int>(EMPTY);
      break;
    case '|':
      pVal = static_cast<int>(WALL);
      break;
    case '-':
      pVal = static_cast<int>(WALL);
      break;
    default:
      pVal = static_cast<int>(std::stoi(pStr));
      break;
  }
}
}  // namespace rapidcsv

rapidcsv::Document readDoc(std::string data) {
  std::stringstream sstream(data);
  rapidcsv::Document doc(sstream, rapidcsv::LabelParams(-1, -1),
                         rapidcsv::SeparatorParams(' '));
  return doc;
}

TEST(FileParserTest, Parser_ReadDoc_FirstDigitIsCorrect) {
  rapidcsv::Document doc = readDoc(sudocu4x4);

  std::vector<int> game_data = doc.GetColumn<int>(0);

  EXPECT_EQ(game_data[0], 2);
  EXPECT_EQ(game_data[1], 0);
  EXPECT_EQ(game_data[2], -1);
}

class Number {
  int number;
  std::vector<int> options;

 public:
  explicit Number(int num);
  int get_number();
  std::vector<int> get_options();
};

Number::Number(int num) {
  number = num;

  if (num == 0) {
    for (int i = 1; i <= 9; i++) options.push_back(i);
  }
}

int Number::get_number() { return number; }

std::vector<int> Number::get_options() { return options; }

TEST(FileParserTest, GameFactory_Int2Number_NumberClassForSetNumber) {
  Number num(1);

  EXPECT_EQ(num.get_number(), 1);
}

TEST(FileParserTest, GameFactory_Int2Number_NumberClassForOpenNumber) {
  Number num(0);
  std::vector<int> expected_options;
  for (int i = 1; i <= 9; i++) expected_options.push_back(i);

  EXPECT_EQ(num.get_number(), 0);
  EXPECT_EQ(num.get_options(), expected_options);
}
