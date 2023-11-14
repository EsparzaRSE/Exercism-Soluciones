#include "grade_school.h"

namespace grade_school {

    void school::add(std::string nombre, int grado){
        lista[grado].push_back(nombre);
        std::sort(lista[grado].begin(), lista[grado].end());   
    }

    //para que funcione, lo importante es el const y la referencia
    const std::map<int, std::vector<std::string>> &school::roster() const{
        return lista;
    }

    const std::vector<std::string> school::grade(int grado) const{
        return lista.find(grado)->second;    
    }
}  // namespace grade_school