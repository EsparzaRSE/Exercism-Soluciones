#include "collatz_conjecture.h"

namespace collatz_conjecture {

    int steps(int number){
        
        int n_steps{ 0 };

        if(number <= 0) throw std::domain_error("Los strings deben ser de la misma longitud");

        while(number != 1){

            if(number % 2 == 0) number = number / 2;
            else number = (3*number)+1;
            ++n_steps;
        }

        return n_steps;   
    }
}  // namespace collatz_conjecture
