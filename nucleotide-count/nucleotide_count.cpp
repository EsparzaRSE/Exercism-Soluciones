#include "nucleotide_count.h"

namespace nucleotide_count {
    
    std::map<char, int> count(const std::string& cadena){

        std::map<char, int> conteo{{'A', 0},{'C', 0},{'G', 0},{'T', 0}};

        for(auto& it : cadena){
            switch(it){
                case 'A':
                    [[fallthrough]];
                case 'C':
                case 'G':
                case 'T':
                    ++conteo.find(it)->second;
                    break;
                default:
                    throw std::invalid_argument("Cadena incorrecta");
            }
        }
        return conteo;
    }
}  // namespace nucleotide_count
