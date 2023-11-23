#include "matching_brackets.h"

namespace matching_brackets {

    bool check(std::string_view brackets){

        std::stack<char> pila{}; 

        for(const auto& it : brackets){
            if(it == '[' || it == '(' || it == '{'){
                pila.push(it);
            }
            else if(it == ']' || it == ')' || it == '}'){
                if(pila.empty()) return false;
                else{
                    char top{pila.top()};
                    pila.pop();
                    if((it == ']' && top != '[') || (it == ')' && top != '(') || (it == '}' && top != '{')){
                        return false;
                    }
                }
            }
        }

        if(!pila.empty()) return false;

        return true;   
    }
}  // namespace matching_brackets
