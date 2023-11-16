#include "rna_transcription.h"

namespace rna_transcription {

    std::string to_rna(std::string_view dna){

        std::string rna{};

        for(auto it : dna){
            switch(it){
                case 'A':
                    rna += "U";
                    break;
                case 'C':
                    rna += "G";
                    break;
                case 'G':
                    rna += "C";
                    break;
                case 'T':
                    rna += "A";
                    break;
            }
        }
        return rna;
    }

        char to_rna(char dna){

            switch(dna){
                case 'A':
                    return 'U'; 
                case 'C':
                    return 'G';
                case 'G':
                    return 'C';
                case 'T':
                    return 'A';
                default:
                    throw std::invalid_argument("Cadena incorrecta");
            }
    }
}  // namespace rna_transcription
