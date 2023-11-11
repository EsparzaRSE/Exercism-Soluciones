#include "grains.h"

namespace grains {

    double square(double casilla){
        return pow(base, casilla-1);
    }

    double total(){

        double total{0};

        for(int i{1}; i <= 64; ++i){
            total += square(i);
        } 
        return total;
    }
}  // namespace grains
