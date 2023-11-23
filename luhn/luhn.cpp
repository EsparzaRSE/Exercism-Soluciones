#include "luhn.h"

namespace luhn {

    bool valid(std::string_view numero){
       
        int suma{0};
        int posicion{0};

        for(int i{static_cast<int>(numero.size()) - 1}; i >= 0; --i){
            if(std::isdigit(numero[i])) {
                int digito{numero[i] - '0'};
                if(posicion % 2 != 0){
                    digito *= 2;
                    if(digito > 9) digito -= 9;
                }
                suma += digito;
                ++posicion;
            }
            else if(numero[i] != ' ') return false;
        }
        
        return (posicion > 1) && (suma % 10 == 0);
    }
}  // namespace luhn