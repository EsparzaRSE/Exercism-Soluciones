#include "secret_handshake.h"

namespace secret_handshake {

    std::vector<std::string> commands(int numero){

        std::vector<std::string> saludo{};

        if(numero & 0b00001) saludo.push_back("wink");
        if(numero & 0b00010) saludo.push_back("double blink");
        if(numero & 0b00100) saludo.push_back("close your eyes");
        if(numero & 0b01000) saludo.push_back("jump");
        if(numero & 0b10000) std::reverse(saludo.begin(), saludo.end());
        return saludo;
    }
}  // namespace secret_handshake
