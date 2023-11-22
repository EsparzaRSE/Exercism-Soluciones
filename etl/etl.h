#pragma once

#ifndef ETL_H
#define ETL_H

#include <map>
#include <vector>
#include <cctype>

namespace etl {
    std::map<char, int> transform(std::map<int, std::vector<char>> viejo);
}  // namespace etl

#endif // ETL_H