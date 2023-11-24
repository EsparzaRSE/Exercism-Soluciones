#pragma once

#ifndef HEXADECIMAL_H
#define HEXADECIMAL_H

#include <string_view>
#include <string>
#include <cmath>

namespace hexadecimal {
    int convert(std::string_view str_hexa);
}  // namespace hexadecimal

#endif // HEXADECIMAL_H