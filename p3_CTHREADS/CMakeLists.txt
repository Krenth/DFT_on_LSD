cmake_minimum_required(VERSION 3.9)
project(p3CTHREAD)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror -pthread")

include_directories(
        src
)

set(SOURCE_FILES
        main.cc
        src/complex.h
        src/complex.cc
        src/input_image.h
        src/input_image.cc
        )

add_executable(${PROJECT_NAME} ${SOURCE_FILES} main.cc)
