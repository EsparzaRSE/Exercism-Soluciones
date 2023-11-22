#include "etl.h"

namespace etl {

    std::map<char, int> transform(std::map<int, std::vector<char>> viejo){

        std::map<char, int> nuevo{};

        for(const auto& it_map : viejo){
            for(const auto& it_vector : it_map.second){
                nuevo.insert({std::tolower(it_vector), it_map.first});
            }
       }

       return nuevo; 
    }
}  // namespace etl
