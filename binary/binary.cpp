#include "binary.h"

namespace binary {

    int convert(std::string_view str_binario){

        int base10{0};
        int posicion{0};

        for(int i{static_cast<int>(str_binario.size()) - 1}; i >= 0; --i){
            if(!isdigit(str_binario[i])) return 0;
            if(str_binario[i] == '0' || str_binario[i] == '1') {
                int digito{str_binario[i] - '0'};
                base10 += digito*(pow(2,posicion));
                ++posicion;
            }
        }
        return base10;
    }
}  // namespace binary
