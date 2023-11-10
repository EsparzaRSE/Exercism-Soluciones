#include "doctor_data.h"

heaven::Vessel::Vessel(std::string name, int number){
    this->name = name;
    this->number = number;
    system = star_map::System::Sol; 
    generation = number;
    current_system = system;
}

heaven::Vessel::Vessel(std::string name, int number, star_map::System system){
    this->name = name;
    this->number = number;
    this->system = system;
    generation = number;
    current_system = this->system;
}

heaven::Vessel heaven::Vessel::replicate(std::string name){

    heaven::Vessel vessel{name, generation+1};
    return vessel;
}

void heaven::Vessel::make_buster(){
    ++busters;  
}

bool heaven::Vessel::shoot_buster(){
    if(busters > 0){
        --busters;
        return true;
    }
    else return false;
}

std::string heaven::Vessel::get_name(){
    return name;
}

std::string heaven::get_older_bob(Vessel v1, Vessel v2){
    if(v1.generation < v2.generation) return v1.get_name();
    else return v2.get_name();
}

bool heaven::in_the_same_system(Vessel v1, Vessel v2){
    if(v1.current_system == v2.current_system) return true;
    else return false;
}