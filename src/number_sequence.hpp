// Copyright 2023 Mark Verbeek

#ifndef SRC_NUMBER_SEQUENCE_HPP_
#define SRC_NUMBER_SEQUENCE_HPP_

#include <vector>

#include "src/number.hpp"

class NumberSequence {
  std::vector<Number> numbers;

 public:
  void set_numbers(std::vector<Number>);
  int length();
  bool is_solved();

 private:
  int sum();
};

#endif  // SRC_NUMBER_SEQUENCE_HPP_
