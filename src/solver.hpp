// Copyright 2023 Mark Verbeek

#ifndef SRC_SOLVER_HPP_
#define SRC_SOLVER_HPP_

#include "src/number_sequence.hpp"

class Solver {
 public:
  NumberSequence init(NumberSequence);
  NumberSequence solve(NumberSequence);
};

#endif  // SRC_SOLVER_HPP_
