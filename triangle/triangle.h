#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <stdexcept>

namespace triangle {

    enum class flavor{ //struct ya que todo es público
        equilateral, isosceles, scalene, fail,
    };

    flavor kind(float one, float two, float three); //float ya que los flotantes van a ser pequeños, no veo necesario un double
}  // namespace triangle

#endif // TRIANGLE_H