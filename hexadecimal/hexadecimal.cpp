#include "hexadecimal.h"

namespace hexadecimal {
    int convert(std::string_view str_hexa){

        int decimal{0};
        int posicion{0};

        for(int i{static_cast<int>(str_hexa.size()) - 1}; i >= 0; --i){
            int digito{0};
            
            if(isdigit(str_hexa[i])) digito = str_hexa[i] - '0';
            else if(str_hexa[i] >= 'a' && str_hexa[i] <= 'f') digito = str_hexa[i] - 'W';
            else return 0;
            
            decimal += digito*(pow(16,posicion));
            ++posicion;          
        }
        return decimal;
    }
}  // namespace hexadecimal
