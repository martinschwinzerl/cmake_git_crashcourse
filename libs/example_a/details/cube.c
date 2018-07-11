#include "example_a/cube.h"
#include "example_a/details/multiplication.h"

extern double cube( double const a );
extern int    cube_int( int const a );

double cube( double const a )
{
    return multiplication( a, multiplication( a, a ) );
}

int cube_int( int const a )
{
    return multiplication_int( a, multiplication_int( a, a ) );
}

/* end: libs/example_a/details/square.c */
