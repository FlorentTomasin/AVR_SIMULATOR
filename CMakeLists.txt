cmake_minimum_required(VERSION 3.0)

project(avr)

file(
    GLOB
    SRCS
    "src/*.c"
)

file(
    GLOB
    HEADERS
    src/*.h
)

add_executable(
    avr
    ${SRCS}
    ${HEADERS}
)

set(CMAKE_CXX_FLAGS "-Wall -Wextra -pedantic -Wmissing-prototypes -Wstrict-prototypes -Wold-style-definition")

enable_testing ()

add_test (
    NAME test
    COMMAND ./avr ../AVR_platform_test_code/test.ino.standard.hex
)
