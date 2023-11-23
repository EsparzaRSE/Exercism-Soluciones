#pragma once

#ifndef ACRONYM_H
#define ACRONYM_H

#include <string>
#include <string_view>
#include <cctype>

namespace acronym {

    std::string acronym(std::string_view frase);
}  // namespace acronym

#endif // ACRONYM_H