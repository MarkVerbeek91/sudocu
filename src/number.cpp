// Copyright 2023 Mark Verbeek
#include "src/number.hpp"

#include <vector>

Number::Number(int num) {
  number = num;

  if (num == 0) {
    for (int i = 1; i <= 9; i++) options.push_back(i);
  }
}

int Number::get_number() { return number; }

std::vector<int> Number::get_options() { return options; }
