#include "gigasecond.h"

using namespace boost::posix_time;

namespace gigasecond
{
  boost::posix_time::ptime advance(ptime moment)
  {
    return moment + seconds(1000000000);
  }
}
