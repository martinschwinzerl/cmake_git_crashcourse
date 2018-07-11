set( LIBEXAMPLE_B_HEADERS
     area.h
)

set( LIBEXAMPLE_B_SOURCES
     details/area.cpp
)

add_library( example_b SHARED
             ${LIBEXAMPLE_B_HEADERS}
             ${LIBEXAMPLE_B_SOURCES}
)

# libexample_b uses stuff from libexample_a -> we have to tell CMake that
# libexample_b depends on example_a so that it can find the functions from
# libexample_a and so that libexample_b is always recompiled if libexample_a
# changes!
target_link_libraries( example_b PUBLIC example_a )

# the path used for the header files is relative to the
# libs subdirectory in this CMAKE project -> set the include path for this
# library.
# NOTE: by making the include directory "PUBLIC", CMake will pass on this
# include path to all users of this library, i.e. every other library or
# executable that uses example_b via target_link_libraries()
#
target_include_directories( example_b PUBLIC "${CMAKE_SOURCE_DIR}/libs" )

# It's a C++ library which should be clear from the extension of the files
# i.e. cpp; To be sure, it's set explicitly:
set_target_properties( example_b PROPERTIES LINKER_LANGUAGE CXX )

# libexample_b is a shared library - on some operating systems like linux,
# it's necessary to enable so called "position independent code" support
# On other platforms, it does no harm -> so let's enable it!
set_target_properties( example_b PROPERTIES POSITION_INDEPENDENT_CODE ON )
