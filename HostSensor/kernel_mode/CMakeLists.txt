cmake_minimum_required(VERSION 3.7.2)

project(kernel_mode)

set(CMAKE_C_COMPILER /usr/bin/clang)

add_custom_target(${PROJECT_NAME}.o ALL
        COMMAND ${CMAKE_C_COMPILER} -g -O2 -target bpf -c ${CMAKE_CURRENT_SOURCE_DIR}/kernel_mode.c -o ${PROJECT_NAME}.o DEPENDS kernel_mode.c)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}.o DESTINATION bin)