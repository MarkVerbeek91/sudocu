// Copyright 2023 Mark Verbeek
#include "src/number.hpp"

#include <gtest/gtest.h>

#include <vector>

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
