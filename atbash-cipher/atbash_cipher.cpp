#include "atbash_cipher.h"

namespace atbash_cipher {

    std::string encode(std::string_view code){

        if(code.length() > 5){

            std::string codigo{decode(code)};
            std::string codificado{};

            for (size_t i{0}; i < codigo.length(); ++i) {
                if (i % 5 == 0 && i != 0 && i < codigo.length() - 1) {
                    codificado += ' ';
                }
                codificado += codigo[i];
            }
            return codificado;    
        }
        
        return decode(code);
    }

    std::string decode(std::string_view code){
        
        std::string codificado{};

        for (char letra : code) {
            if(std::isalpha(letra)) letra = std::tolower(letra);
            if (letra >= 'a' && letra <= 'z') {
                codificado += 192 + 27 - letra;
            }
            if (std::isdigit(letra)) {
                codificado += letra;
            } 
        }
        
        return codificado;    
    }
    
}  // namespace atbash_cipher

