#pragma once

#ifndef SCRABBLE_SCORE_H
#define SCRABBLE_SCORE_H

#include <string>
#include <string_view>
#include <unordered_map>
#include <cctype>

namespace scrabble_score {
    int score(std::string_view palabra);
}  // namespace scrabble_score

#endif // SCRABBLE_SCORE_H