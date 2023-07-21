// Copyright 2023 Mark Verbeek
#ifndef SRC_NUMBER_HPP_
#define SRC_NUMBER_HPP_

#include <vector>

class Number {
  int number;
  std::vector<int> options;

 public:
  explicit Number(int);
  explicit Number(int, int);
  int get_number();
  void set_number(int);
  std::vector<int> get_options();
};

#endif  // SRC_NUMBER_HPP_
