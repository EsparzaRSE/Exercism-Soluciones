#include "trinary.h"

namespace trinary {

    int to_decimal(std::string tri){

        int resultado{0};
        int pos{static_cast<int>(tri.length()) - 1};

        if (std::find_if(tri.begin(), tri.end(), [&](char c){return !(c == '0' || c == '1' || c == '2');}) != tri.end()){
            return resultado;
        }

        for(auto& it : tri){
            int to_int{static_cast<int>(it - 48)};
            resultado = resultado + (to_int*pow(3,pos));
            --pos;
        }
        return resultado;
    }
}  // namespace trinary
