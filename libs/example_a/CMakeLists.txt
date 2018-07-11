set( LIBEXAMPLE_A_HEADERS
     square.h
     cube.h
     details/multiplication.h
)


set( LIBEXAMPLE_A_SOURCES
     details/square.c
     details/cube.c
     details/multiplication.c
)


add_library( example_a STATIC
             ${LIBEXAMPLE_A_HEADERS}
             ${LIBEXAMPLE_A_SOURCES}
)

# the path used for the header files is relative to the
# libs subdirectory in this CMAKE project -> set the include path for this
# library.
# NOTE: by making the include directory "PUBLIC", CMake will pass on this
# include path to all users of this library, i.e. every other library or
# executable that uses example_b via target_link_libraries()
#
target_include_directories( example_a PUBLIC "${CMAKE_SOURCE_DIR}/libs" )

# This is a C library -> let's make this explicitly clear even though it should
# directly follow from the .c extensions of the source files. For C++, you would
# use .cpp or .cc as file extensions;
set_target_properties( example_a PROPERTIES LINKER_LANGUAGE C )
set_target_properties( example_a PROPERTIES C_STANDARD 99 )

# libexample_a is a static library. In order to use such a library from
# a shared library - see libexample_b - it is usually a good idea to enable
# something called "POSITION_INDEPENDENT_CODE" support:
set_target_properties( example_a PROPERTIES POSITION_INDEPENDENT_CODE ON )

