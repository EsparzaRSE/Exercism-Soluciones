#include "protein_translation.h"

namespace protein_translation {

    std::vector<std::string> proteins(std::string rna){

        std::map<std::string, std::string> resulting_amino{ {"AUG","Methionine"},{"UUU","Phenylalanine"},{"UUC","Phenylalanine"},
                                                            {"UUA","Leucine"},{"UUG","Leucine"},{"UCU","Serine"},
                                                            {"UCC","Serine"},{"UCA","Serine"},{"UCG","Serine"},
                                                            {"UAU","Tyrosine"},{"UAC","Tyrosine"},{"UGU","Cysteine"},
                                                            {"UGC","Cysteine"},{"UGG","Tryptophan"},{"UAA","STOP"},
                                                            {"UAG","STOP"},{"UGA","STOP"} };  

        std::vector<std::string> resultado{};
        std::vector<std::string> recortes{};

        if(rna.length() > 3){
            for (size_t i = 0; i < rna.length(); i += 3) {
                recortes.push_back(rna.substr(i, 3));
            }
        }
        else recortes.push_back(rna);

        for(const auto& recorte : recortes){
            auto it = resulting_amino.find(recorte);
            if (it != resulting_amino.end()) {
                if (it->second == "STOP") {
                    // Si encontramos "STOP", devolvemos el resultado actual
                    return resultado;
                }
                resultado.push_back(it->second);
            }
        }

        return resultado;    
    }
}  // namespace protein_translation
