// Copyright 2023 Mark Verbeek
#include "src/parser.hpp"

#include <iostream>
#include <string>
#include <vector>

rapidcsv::Document readDoc(std::string data) {
  std::stringstream sstream(data);
  rapidcsv::Document doc(sstream, rapidcsv::LabelParams(-1, -1),
                         rapidcsv::SeparatorParams(' '));
  return doc;
}

// game object
