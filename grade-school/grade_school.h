#pragma once

#ifndef GRADE_SCHOOL_H
#define GRADE_SCHOOL_H

#include <string>
#include <vector>
#include <map>
#include <algorithm> 

namespace grade_school {

    class school{
        
        public:
            void add(std::string nombre, int grado);
            const std::map<int, std::vector<std::string>> &roster() const;
            const std::vector<std::string> grade(int grado) const;

        private:
            std::map<int, std::vector<std::string>> lista{};
    };   
}  // namespace grade_school

#endif // GRADE_SCHOOL_H