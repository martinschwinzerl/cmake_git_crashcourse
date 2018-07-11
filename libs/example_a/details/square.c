#include "example_a/square.h"
#include "example_a/details/multiplication.h"

extern double square( double const a );
extern int    square_int( int const a );

double square( double const a )
{
    return multiplication( a, a );
}

int square_int( int const a )
{
    return multiplication_int( a, a );
}

/* end: libs/example_a/details/square.c */
