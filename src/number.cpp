// Copyright 2023 Mark Verbeek
#include "src/number.hpp"

#include <vector>

#define DEFAULT_SIZE 9

Number::Number(int num) {
  number = num;

  if (num == 0) {
    for (int i = 1; i <= DEFAULT_SIZE; i++) options.push_back(i);
  }
}

Number::Number(int num, int size) {
  number = num;

  if (num == 0) {
    for (int i = 1; i <= size; i++) options.push_back(i);
  }
}

int Number::get_number() { return number; }

void Number::set_number(int num) {
  number = num;
  options.clear();
  return;
}

std::vector<int> Number::get_options() { return options; }

void Number::remove_option(int n) {
  std::vector<int>::iterator it;

  it = options.begin();

  for (int i = 0; i < static_cast<int>(options.size()); i++) {
    if (*it == i) {
      options.erase(it);
      break;
    }
  }

  return;
}
