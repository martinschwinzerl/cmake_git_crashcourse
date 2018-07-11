#include "example_a/details/multiplication.h"

extern double multiplication( double const a, double const b );
extern int    multiplication_int( int const a, int const b );

double multiplication( double const a, double const b )
{
    return a * b;
}

int multiplication_int( int const a, int const b )
{
    return a * b;
}

/* end: libs/example_a/details/multiplication.c */
