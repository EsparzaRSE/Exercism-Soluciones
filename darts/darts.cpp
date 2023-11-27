#include "darts.h"

namespace darts {

    int score(double x, double y){

        double distancia_pitagoras{std::sqrt(x*x + y*y)};

        if(distancia_pitagoras > 10) return 0;
        if(distancia_pitagoras > 5) return 1;
        if(distancia_pitagoras > 1) return 5;
        return 10;
    }
} // namespace darts