#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <stdexcept>

namespace triangle {

    struct flavor{ //struct ya que todo es público
        static const bool equilateral{true};
        static const bool isosceles{true};
        static const bool scalene{true};
    };

    bool kind(float one, float two, float three); //float ya que los flotantes van a ser pequeños, no veo necesario un double
}  // namespace triangle

#endif // TRIANGLE_H