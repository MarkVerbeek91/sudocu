// Copyright 2023 Mark Verbeek
#include "src/number.hpp"

#include <gtest/gtest.h>

#include <vector>

TEST(NumberTest, GameFactory_Int2Number_NumberClassForSetNumber) {
  Number num(1);

  EXPECT_EQ(num.get_number(), 1);
}

TEST(NumberTest, GameFactory_Int2Number_OptionsOpen) {
  Number num(0, 16);

  EXPECT_EQ(num.get_options().size(), 16);
}

TEST(NumberTest, GameFactory_Int2Number_NumberClassForGetNumber) {
  Number num(0);

  num.set_number(1);

  EXPECT_EQ(num.get_number(), 1);
  EXPECT_EQ(num.get_options().size(), 0);
}

TEST(NumberTest, GameFactory_Int2Number_RemoveOptionNumber) {
  Number num(0);

  num.remove_option(1);

  EXPECT_EQ(num.get_number(), 0);
  EXPECT_EQ(num.get_options().size(), 8);
}

TEST(NumberTest, GameFactory_Int2Number_NumberClassForOpenNumber) {
  Number num(0);
  std::vector<int> expected_options;
  for (int i = 1; i <= 9; i++) expected_options.push_back(i);

  EXPECT_EQ(num.get_number(), 0);
  EXPECT_EQ(num.get_options(), expected_options);
}
