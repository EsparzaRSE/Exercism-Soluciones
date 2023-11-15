#pragma once

#ifndef NUCLEOTIDE_COUNT_H
#define NUCLEOTIDE_COUNT_H

#include <map>
#include <stdexcept>
#include <string>

namespace nucleotide_count {
    
    std::map<char, int> count(const std::string& cadena);

}  // namespace nucleotide_count

#endif // NUCLEOTIDE_COUNT_H