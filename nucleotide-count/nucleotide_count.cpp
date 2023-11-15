#include "nucleotide_count.h"

namespace nucleotide_count {
    
    std::map<char, int> count(const std::string& cadena){

        std::map<char, int> conteo{{'A', 0},{'C', 0},{'G', 0},{'T', 0}};

        for(auto& it : cadena){
            switch(it){
                case 'A':
                    ++conteo.find('A')->second;
                    break;
                case 'C':
                    ++conteo.find('C')->second;
                    break; 
                case 'G':
                    ++conteo.find('G')->second;
                    break;
                case 'T':
                    ++conteo.find('T')->second;
                    break;
                default:
                    throw std::invalid_argument("Cadena incorrecta");
                    break;
            }
        }
        return conteo;
    }
}  // namespace nucleotide_count
