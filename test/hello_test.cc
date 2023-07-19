#include <gtest/gtest.h>

#include <iostream>
// Copyright 2023 Mark Verbeek

#include "inc/ext/rapidcsv.h"
#include "test/test_data.h"

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  EXPECT_EQ(7 * 6, 42);
}

TEST(HelloTest, ReadAFile) {
  std::stringstream sstream(sudocu4x4);

  rapidcsv::Document doc(sstream, rapidcsv::LabelParams(-1, -1),
                         rapidcsv::SeparatorParams(','));

  EXPECT_EQ(true, true);
}
