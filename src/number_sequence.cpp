// Copyright 2023 Mark Verbeek

#include "src/number_sequence.hpp"

#include "src/number.hpp"

void NumberSequence::set_numbers(std::vector<Number> nums) { numbers = nums; }

std::vector<Number> NumberSequence::get_numbers() { return numbers; }

int NumberSequence::length() { return numbers.size(); }

bool NumberSequence::is_solved() {
  int sum_of_elements = 0;
  for (auto& n : numbers) sum_of_elements += n.get_number();
  return sum_of_elements == sum();
}

int NumberSequence::sum() { return numbers.size() * (numbers.size() + 1) / 2; }
