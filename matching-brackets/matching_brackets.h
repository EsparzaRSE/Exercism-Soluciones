#pragma once

#ifndef MATCHING_BRACKETS_H
#define MATCHING_BRACKETS_H

#include <string_view>
#include <stack>

namespace matching_brackets {
    bool check(std::string_view brackets);
}  // namespace matching_brackets

#endif // MATCHING_BRACKETS_H