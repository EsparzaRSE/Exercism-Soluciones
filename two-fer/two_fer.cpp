#include "two_fer.h"

namespace two_fer
{
    std::string two_fer(std::string nombre){
        if(nombre.empty()) return "One for you, one for me.";
        else return "One for " + nombre + ", one for me.";
    }
} // namespace two_fer

