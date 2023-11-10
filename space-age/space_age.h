#pragma once

#ifndef SPACE_AGE_H
#define SPACE_AGE_H

namespace space_age {
    
    class space_age{

        public:
            space_age(long int seg);
            long int seconds() const;
            double on_earth() const;
            double on_mercury() const;
            double on_venus() const;
            double on_mars() const;
            double on_jupiter() const;
            double on_saturn() const;
            double on_uranus() const;
            double on_neptune() const;

        private:
            long int segundos{};
            const double seconds_year_earth{365.25*24*60*60};
            const double seconds_year_mercury{seconds_year_earth*0.2408467};
            const double seconds_year_venus{seconds_year_earth*0.61519726};
            const double seconds_year_mars{seconds_year_earth*1.8808158};
            const double seconds_year_jupiter{seconds_year_earth*11.862615};
            const double seconds_year_saturn{seconds_year_earth*29.447498};
            const double seconds_year_uranus{seconds_year_earth*84.016846};
            const double seconds_year_neptune{seconds_year_earth*164.79132};
    };
}  // namespace space_age

#endif // SPACE_AGE_H