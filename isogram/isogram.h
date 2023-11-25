#pragma once

#ifndef ISOGRAM_H
#define ISOGRAM_H

#include <string_view>
#include <array>
#include <cctype>

namespace isogram {
    bool is_isogram(std::string_view frase);
}  // namespace isogram

#endif // ISOGRAM_H