#include "sum_of_multiples.h"

namespace sum_of_multiples {

    int to(std::vector<int> items, int level){

        std::set<int> multiplos{};

        for(int i{0}; i < static_cast<int>(items.size()); ++i){
            for(int j{0}; j < level; ++j){
                if(j % items.at(i) == 0) multiplos.insert(j);
            }
        }

        return std::accumulate(multiplos.begin(), multiplos.end(), 0);
    }
}  // namespace sum_of_multiples
