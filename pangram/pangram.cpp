#include "pangram.h"

namespace pangram {

    bool is_pangram(std::string frase){

        if(frase == "") return false;
        
        int elements_in_pangram{0};

        for(int i{97}; i < 123; ++i){
            if((frase.find(static_cast<char>(i)) != std::string::npos) 
             ||(frase.find(static_cast<char>(i - 32)) != std::string::npos)){
                ++elements_in_pangram;
            } 
        }

        if(elements_in_pangram == 26) return true;
        else return false;
    }  
}// namespace pangram
