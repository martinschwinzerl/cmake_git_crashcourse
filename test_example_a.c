#include <stdio.h>

#include "example_a/square.h"
#include "example_a/cube.h"

int main()
{
    double const a = 1.41421356237309504880168872421;
    int    const b = 2;

    printf( "a^2 = a * a = %8.4f\r\n", square( a ) );
    printf( "b^2 = b * b = %8d\r\n", square_int( b ) );

    return 0;
}

/* end: git/cmake_git_crashcourse/test_example_a.c */
