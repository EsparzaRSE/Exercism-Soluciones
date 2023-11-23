#include "luhn.h"

namespace luhn {

    bool valid(std::string_view numero){
       
        int pos{0};
        int doble{};
        int suma{0};
        std::vector<int> to_int{};

        for(auto it : numero){
            if(std::isdigit(it)) to_int.push_back(static_cast<int>(it - '0'));
            else if(it != ' ') return false;
        }
        
        if(to_int.size() < 2) return false;
        
        for(int i{static_cast<int>(to_int.size()-1)}; i >= 0; --i){
            if(pos % 2 != 0){
                doble = to_int[i]*2;
                if(doble > 9) doble = doble - 9;
                suma = suma + doble;
            }
            else suma = suma + to_int[i];
            ++pos;
        }

        if(suma % 10 == 0) return true;

        return false;
    }
}  // namespace luhn
