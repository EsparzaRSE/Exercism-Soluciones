#include "triangle.h"

namespace triangle {

    bool kind(float one, float two, float three){

        if(((one < 0) || (two < 0) || (three < 0)) 
        || ((one == 0) && (two == 0) && (three == 0)) 
        || ((one + two <= three) || (one + three <= two) || (two + three <= one))) throw std::domain_error("Illegal");

        if((one == two) && (two == three)) return triangle::flavor::equilateral;
        else if((one == two) || (one == three) || (two == three)) return triangle::flavor::isosceles;
        else if((one != two) && (two != three)) return true;
        else return false;
    }
}  // namespace triangle
