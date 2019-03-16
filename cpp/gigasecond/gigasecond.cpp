#include "gigasecond.h"
#include "boost/date_time/posix_time/posix_time.hpp"

using namespace boost::posix_time;

namespace gigasecond
{
  boost::posix_time::ptime advance(boost::posix_time::ptime moment)
  {
    return time_period(moment, seconds(1000000000)).end();
  }
}
