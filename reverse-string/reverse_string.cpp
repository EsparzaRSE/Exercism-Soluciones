#include "reverse_string.h"
#include <string>
namespace reverse_string {
    std::string reverse_string(std::string str){
        std::string reverse{};

        for(int i{static_cast<int>(str.size()) - 1}; i >= 0; --i){
            reverse += str.substr(i,1);
        }
        return reverse;
    }
}  // namespace reverse_string

