#include "isbn_verifier.h"

namespace isbn_verifier {
    bool is_valid(std::string_view isbn){
        
        int verificacion{0};
        int posicion{10};

        if(isbn.size() < 10) return false;
        
        for(int i{0}; i < static_cast<int>(isbn.size()); ++i){

            if(std::isalpha(isbn[i])){
                if(isbn[isbn.size()-1] == 'X'){
                    verificacion += 10;
                    --posicion;
                }
                else return false;
            } 
            if(std::isdigit(isbn[i])){
                verificacion += posicion * (isbn[i] - '0');
                --posicion;
            }
            if(posicion < 0) return false; 
        }

        return !(verificacion % 11); 
    }
}  // namespace isbn_verifier