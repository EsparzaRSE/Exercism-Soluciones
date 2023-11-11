#include "grains.h"

namespace grains {

    unsigned long long square(int casilla){
        return 1ULL << (casilla - 1);
    }

    unsigned long long total(){
        
        unsigned long long total{};
        
        for(int i{1}; i <= 64; ++i){
            total += square(i);
        } 
        return total;
    }
}