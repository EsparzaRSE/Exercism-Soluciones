#pragma once

#ifndef ATBASH_CIPHER_H
#define ATBASH_CIPHER_H

#include <string>
#include <string_view>
#include <unordered_map>

namespace atbash_cipher {
    std::string encode(std::string_view code);
    std::string decode(std::string_view code);
}  // namespace atbash_cipher

#endif // ATBASH_CIPHER_H