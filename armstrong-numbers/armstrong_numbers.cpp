#include "armstrong_numbers.h"

namespace armstrong_numbers {

    bool is_armstrong_number(int numero){

        int original{numero};
        int num_digitos{0};
        int resultado{};

        if(numero == 0) num_digitos = 1;
        else num_digitos = floor(log10(numero) + 1);

        while(numero > 0){
            int digito{numero % 10};
            numero /= 10;
            resultado += pow(digito, num_digitos);
        }
        
        return resultado == original;
    }
}  // namespace armstrong_numbers
