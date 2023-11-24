#include "hexadecimal.h"

namespace hexadecimal {
    int convert(std::string_view str_hexa){
        int decimal{0};

        for(int i{static_cast<int>(str_hexa.size()) - 1}; i >= 0; --i){
            if(isdigit(str_hexa[i])) decimal += (str_hexa[i] - '0') * pow(16, str_hexa.size() - 1 - i);
            else if(str_hexa[i] >= 'a' && str_hexa[i] <= 'f') decimal += (str_hexa[i] - 'W') * pow(16, str_hexa.size() - 1 - i);
            else return 0;
        }
        return decimal;
    }
}  // namespace hexadecimal