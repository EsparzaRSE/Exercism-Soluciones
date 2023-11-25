#include "pascals_triangle.h"

namespace pascals_triangle {

    std::vector<std::vector<int>> generate_rows(int filas){

        std::vector<std::vector<int>> pascal(filas);  

        for(int i{0}; i < filas; ++i){
            pascal[i].resize(i+1);
            pascal[i][0] = pascal[i][i] = 1;

            for(int j{1}; j < i; ++j){
                pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];    
            }     

        }
        return pascal;
    }
}  // namespace pascals_triangle
