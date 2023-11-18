#include "allergies.h"

namespace allergies {

    allergy_test::allergy_test(unsigned int sco) : score{sco}{}

    bool allergy_test::is_allergic_to(const std::string& item){

        lista = allergy_test::get_allergies();

        return lista.find(item) != lista.end();
    }

    std::unordered_set<std::string> allergy_test::get_allergies(){

        if(score & 0b00000001) lista.insert("eggs");
        if(score & 0b00000010) lista.insert("peanuts");
        if(score & 0b00000100) lista.insert("shellfish");
        if(score & 0b00001000) lista.insert("strawberries");
        if(score & 0b00010000) lista.insert("tomatoes");
        if(score & 0b00100000) lista.insert("chocolate");
        if(score & 0b01000000) lista.insert("pollen");
        if(score & 0b10000000) lista.insert("cats");

        return lista;
    }

}  // namespace allergies