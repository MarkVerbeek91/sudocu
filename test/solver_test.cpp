// Copyright 2023 Mark Verbeek
#include "src/solver.hpp"

#include <gtest/gtest.h>

#include "src/number.hpp"
#include "src/number_sequence.hpp"

TEST(SolverTest, Solver_Initialize_SequencePruned) {
  std::vector<Number> numbers;
  NumberSequence nseq;
  Solver solver;

  for (int i = 1; i <= 8; i++) numbers.push_back(Number(i));
  numbers.push_back(Number(0));

  nseq.set_numbers(numbers);

  nseq = solver.init(nseq);

  EXPECT_EQ(nseq.get_numbers()[8].get_number(), 0);
}

TEST(SolverTest, DISABLED_Solver_OneOpenNumber_SequenceSolved) {
  std::vector<Number> numbers;
  NumberSequence nseq;
  Solver solver;

  for (int i = 1; i <= 8; i++) numbers.push_back(Number(i));
  numbers.push_back(Number(0));

  nseq.set_numbers(numbers);

  nseq = solver.init(nseq);
  nseq = solver.solve(nseq);

  EXPECT_TRUE(nseq.is_solved());
}
