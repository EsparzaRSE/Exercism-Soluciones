#include "space_age.h"

namespace space_age {

    space_age::space_age::space_age(long int seg) : segundos{seg}{}

    long int space_age::space_age::seconds() const {
        return segundos;
    }

    double space_age::space_age::on_earth() const{
        return segundos / seconds_year_earth;
    }

    double space_age::space_age::on_mercury() const{
        return segundos / seconds_year_mercury;
    }

    double space_age::space_age::on_venus() const{
        return segundos / seconds_year_venus;
    }

    double space_age::space_age::on_mars() const{
        return segundos / seconds_year_mars;
    }

    double space_age::space_age::on_jupiter() const{
        return segundos / seconds_year_jupiter;
    }

    double space_age::space_age::on_saturn() const{
        return segundos / seconds_year_saturn;
    }

    double space_age::space_age::on_uranus() const{
        return segundos / seconds_year_uranus;
    }

    double space_age::space_age::on_neptune() const{
        return segundos / seconds_year_neptune;
    }
}  // namespace space_age


