#include "secret_handshake.h"

namespace secret_handshake {

    std::vector<std::string> commands(int numero){

        std::bitset<5> binario(numero);
        std::vector<std::string> saludo{"wink", "double blink", "close your eyes", "jump"};
        std::vector<std::string> resultado{};

        for (size_t i{0}; i < saludo.size(); ++i) {
            if(binario[i]) resultado.push_back(saludo.at(i));
        }
        if(binario[4]) std::reverse(resultado.begin(), resultado.end());
        return resultado;
    }
}  // namespace secret_handshake
