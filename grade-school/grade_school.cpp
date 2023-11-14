#include "grade_school.h"

namespace grade_school {

    void grade_school::school::add(std::string nombre, int grado){
        
        auto buscar{lista.find(grado)};

        if(buscar == lista.end()){ //si no encuentra, crea el vector y lo mete con esa clave            
            std::vector<std::string> nuevo_vector{nombre};    
            lista[grado] = nuevo_vector;
        } else{
            // Si el grado ya existe, agrega el nombre al vector
            buscar->second.push_back(nombre);
        }    
    }

    std::map<int, std::vector<std::string>> grade_school::school::roster() const{

        //Copia porque al ser const la función no me deja modificar la lista directamente 
        std::map<int, std::vector<std::string>> copia{lista};

        for(auto& it : copia){
            std::sort(it.second.begin(), it.second.end());
        }
        return copia;   
    }

    std::vector<std::string> grade_school::school::grade(int grado) const{
        
        auto buscar{lista.find(grado)};

        if (buscar != lista.end()){
                 
            std::vector<std::string> copia = buscar->second;

            //Si el grado está en la lista ordena y devuelve el vector.
            std::sort(copia.begin(), copia.end());
            return copia;
        } 
        else return std::vector<std::string>();  // sino devuelve un vector vacío       
    }
}  // namespace grade_school
