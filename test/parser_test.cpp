// Copyright 2023 Mark Verbeek
#include "src/parser.hpp"

#include <gtest/gtest.h>

#include <iostream>
#include <vector>

#include "test/test_data.h"

TEST(FileParserTest, Parser_ReadDoc_FirstDigitIsCorrect) {
  rapidcsv::Document doc = readDoc(sudocu4x4);

  std::vector<int> game_data = doc.GetColumn<int>(0);

  EXPECT_EQ(game_data[0], 2);
  EXPECT_EQ(game_data[1], 0);
  EXPECT_EQ(game_data[2], -1);
}
