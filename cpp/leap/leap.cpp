#include "leap.h"

namespace leap {
  bool is_leap_year(int year)
  {
    int mod_4{ year % 4 };
    int mod_100{ year % 100 };
    int mod_400{ year % 400 };

    return (mod_4 == 0) && (mod_100 != 0 || mod_400 == 0);
  }
}
