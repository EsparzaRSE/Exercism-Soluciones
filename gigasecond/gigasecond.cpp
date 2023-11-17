#include "gigasecond.h"

namespace gigasecond {

    boost::posix_time::ptime advance(const boost::posix_time::ptime& fecha){

        return fecha + one_gigasecond;
    }
}  // namespace gigasecond
