#include "perfect_numbers.h"

namespace perfect_numbers {

    clasificacion_numeros classify(int numero){
        
        if(numero <= 0) throw std::domain_error("El número debe ser mayor que 0");

        int suma{};
        
        for(int i{1}; i <= numero / 2; ++i){
            if(numero % i == 0){
                suma += i;
            }
        }
        if(suma == numero) return clasificacion_numeros::perfect;
        else if(suma > numero) return clasificacion_numeros::abundant;
        else return clasificacion_numeros::deficient;
    }
}  // namespace perfect_numbers
