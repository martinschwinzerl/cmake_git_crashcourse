#include "example_b/area.h"
#include "example_a/square.h"

namespace example_b
{
    double area( double const length, double const width )
    {
        return length * width;
    }

    double area( double const a )
    {
        return ::square( a ); /* :: means the global namespace in C */
    }

    int area( int const length, int const width )
    {
        return length * width;
    }

    int area( int const a )
    {
        return ::square_int( a );
    }
}

/* end: libs/example_b/details/area.cpp */
