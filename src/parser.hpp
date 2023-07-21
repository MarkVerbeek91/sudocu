// Copyright 2023 Mark Verbeek

#ifndef SRC_PARSER_HPP_
#define SRC_PARSER_HPP_

#include <string>

#include "inc/ext/rapidcsv.h"

#define EMPTY 0
#define WALL -1

namespace rapidcsv {
template <>
void Converter<int>::ToVal(const std::string& pStr,
                           int& pVal) const {  // NOLINT
  switch (pStr[0]) {
    case '.':
      pVal = static_cast<int>(EMPTY);
      break;
    case '|':
      pVal = static_cast<int>(WALL);
      break;
    case '-':
      pVal = static_cast<int>(WALL);
      break;
    default:
      pVal = static_cast<int>(std::stoi(pStr));
      break;
  }
}
}  // namespace rapidcsv

rapidcsv::Document readDoc(std::string data);

#endif  // SRC_PARSER_HPP_
