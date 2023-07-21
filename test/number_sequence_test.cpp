// Copyright 2023 Mark Verbeek
#include "src/number_sequence.hpp"

#include <gtest/gtest.h>

#include <vector>

#include "src/number.hpp"

TEST(NumberSequenceTest, NumberSequence_NumberAreSet_CorrectLength) {
  NumberSequence nseq;

  std::vector<Number> numbers;
  for (int i = 1; i < 10; i++) numbers.push_back(Number(i));

  nseq.set_numbers(numbers);
  EXPECT_EQ(nseq.length(), 9);
  EXPECT_TRUE(nseq.is_solved());
}

TEST(NumberSequence, NumberSequence_NumberAreSet_IsNotSolved) {
  NumberSequence nseq;

  std::vector<Number> numbers;
  for (int i = 1; i < 10; i++) numbers.push_back(Number(0));

  nseq.set_numbers(numbers);
  EXPECT_FALSE(nseq.is_solved());
}

TEST(NumberSequence, NumberSequence_GetNumbers_NumberVector) {
  NumberSequence nseq;
  Number num(-42);
  std::vector<Number> numbers;
  numbers.push_back(num);
  nseq.set_numbers(numbers);
  EXPECT_EQ(nseq.get_numbers()[0].get_number(), -42);
}
