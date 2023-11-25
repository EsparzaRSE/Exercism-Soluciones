#pragma once

#ifndef PERFECT_NUMBERS_H
#define PERFECT_NUMBERS_H

#include <stdexcept>

namespace perfect_numbers{

    enum clasificacion_numeros{
        perfect, abundant, deficient,
    };

    clasificacion_numeros classify(int numero);

}  // namespace perfect_numbers

#endif  // PERFECT_NUMBERS_H