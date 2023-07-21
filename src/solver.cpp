// Copyright 2023 Mark Verbeek
#include "src/solver.hpp"

NumberSequence Solver::solve(NumberSequence nseq) {
  // rules
  // if number only has one option, that should be it
  for (int i = 0; i <= nseq.length(); i++) {
    for (Number& n : nseq.get_numbers()) {
      if (n.get_options().size() == 1) n.set_number(i);
    }
  }

  return nseq;
}
