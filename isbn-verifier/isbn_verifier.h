#pragma once

#ifndef ISBN_VERIFIER_H
#define ISBN_VERIFIER_H

#include <string>
#include <string_view>

namespace isbn_verifier {
    bool is_valid(std::string_view isbn);    
} // namespace isbn_verifier

#endif // ISBN_VERIFIER_H