#include "math.h"
#include <cmath>

bool miit::help::math::is_equal_doubles(const double lha, const double rha)
{
    return (std::abs(lha - rha) < std::numeric_limits<double>::epsilon());
}
