#pragma once

#ifndef DOCTOR_DATA_H
#define DOCTOR_DATA_H

#include <string>

namespace star_map {

    enum class System {
        Sol, AlphaCentauri, BetaHydri, DeltaEridani, EpsilonEridani, Omicron2Eridani,   
    };
}

namespace heaven {

    class Vessel{

        public:
            Vessel(std::string name, int number);
            Vessel(std::string name, int number, star_map::System system);

            int generation{};  
            int busters{};
            void make_buster();
            bool shoot_buster();  

            Vessel replicate(std::string name);                      
            star_map::System current_system{};
            std::string get_name();

        private:
            std::string name{};
            int number{};
            star_map::System system{};
    };

    std::string get_older_bob(Vessel v1, Vessel v2);
    bool in_the_same_system(Vessel v1, Vessel v2);
}

#endif