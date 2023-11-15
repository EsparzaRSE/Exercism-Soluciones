#include "hamming.h"

namespace hamming {

    int compute(const std::string& cadena_1, const std::string& cadena_2){

        if(cadena_1.size() != cadena_2.size()) throw std::domain_error("Los strings deben ser de la misma longitud");

        int diferencias{};

        for(int i{0}; i < static_cast<int>(cadena_1.size()); ++i){
            if(cadena_1[i] != cadena_2[i]) ++diferencias;
        }

        return diferencias;
    }
}  // namespace hamming
