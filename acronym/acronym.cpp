#include "acronym.h"

namespace acronym {

    std::string acronym(std::string_view frase){

        std::string acronym{};

        if(!frase.empty()) acronym += std::toupper(*frase.begin());

        for(auto it{frase.begin() + 1}; it != frase.end(); ++it){
            if((*it == ' ' || *it == '-' || *it == '_') && *(it + 1) != ' ' && *(it + 1) != '-' && *(it + 1) != '_') {
                acronym += std::toupper(*(it + 1));
            }
        }
        
        return acronym;
    }
}  // namespace acronym
