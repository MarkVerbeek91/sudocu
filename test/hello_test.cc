#include <gtest/gtest.h>

#include <iostream>
// Copyright 2023 Mark Verbeek

#include "inc/ext/rapidcsv.h"
#include "test/test_data.h"

TEST(HelloTest, ReadAFile) {
  std::stringstream sstream(sudocu4x4);

  rapidcsv::Document doc(sstream, rapidcsv::LabelParams(-1, -1),
                         rapidcsv::SeparatorParams(' '),
                         rapidcsv::ConverterParams(true));

  std::vector<int> close = doc.GetColumn<int>(0);

  for (int i : close) std::cout << i << std::endl;
}
