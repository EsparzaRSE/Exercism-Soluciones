#include "isogram.h"

namespace isogram {
    
    bool is_isogram(std::string_view frase){

        if(frase.empty()) return true;

        std::array<char, 26> iso{};

        for(auto it : frase){
            if(std::isalpha(it)) it = std::tolower(it);
            if(it >= 'a' && it <= 'z') {
                if(iso[it - 'a'] != '\0') return false;
                iso[it - 'a'] = it;
            }
        }
        return true;
    }
}  // namespace isogram
