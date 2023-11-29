#include "pop_count.h"

namespace chicken_coop {
    int positions_to_quantity(int numero){

        int contador{0};

        while(numero){
            contador += numero & 1;
            numero >>= 1;
        }
        return contador;
    } 
}  // namespace chicken_coop
