#pragma once

#ifndef GIGASECOND_H
#define GIGASECOND_H

#include "boost/date_time/posix_time/posix_time.hpp"

namespace gigasecond {

    const boost::posix_time::time_duration one_gigasecond = boost::posix_time::seconds(1000000000);
    boost::posix_time::ptime advance(const boost::posix_time::ptime& fecha);
}  // namespace gigasecond

#endif // GIGASECOND_H