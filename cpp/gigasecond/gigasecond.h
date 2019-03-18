#if !defined(GIGASECOND_H)
#define GIGASECOND_H
#include "boost/date_time/posix_time/posix_time.hpp"
#define EXERCISM_RUN_ALL_TESTS

namespace gigasecond
{
  boost::posix_time::ptime advance(boost::posix_time::ptime moment);
}

#endif
