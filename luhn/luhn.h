#pragma once

#ifndef LUHN_H
#define LUHN_H

#include <string>
#include <string_view>

namespace luhn {

    bool valid(std::string_view numero);
}  // namespace luhn

#endif // LUHN_H