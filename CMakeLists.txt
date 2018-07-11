cmake_minimum_required( VERSION 3.3 FATAL_ERROR )

project( crash_course LANGUAGES C CXX )

# libexample_a and libexample_b are provided inside libs directory
add_subdirectory( libs )


# Use libexample_a in a simple C test application
add_executable( test_example_a test_example_a.c )
target_link_libraries( test_example_a example_a )

#libexample_b depends on libexample_a; thanks to cmake, we only have to
# set libexample_b as a link libary to the using application and
# libexample_a is "automatically" added to the dependencies of test_example_a
# as well:
add_executable( test_example_b test_example_b.cpp )
target_link_libraries( test_example_b example_b )