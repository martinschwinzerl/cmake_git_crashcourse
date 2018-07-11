#include <iostream>

#include "example_b/area.h"

int main()
{
    double const a = 2.0;
    double const b = 4.0;

    std::cout << "length = " << a << ", "
              << "width  = " << b << ", "
              << "area   = " << example_b::area( a, b ) << std::endl;

    int const l = 4;
    int const w = 2;

    std::cout << "length = " << l << ", "
              << "width  = " << w << ", "
              << "area   = " << example_b::area( l, w ) << std::endl;

    return 0;
}