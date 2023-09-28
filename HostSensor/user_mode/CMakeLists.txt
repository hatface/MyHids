cmake_minimum_required(VERSION 3.7.2)

project(user_mode)

add_executable(${PROJECT_NAME} user_mode.c)

target_link_libraries(${PROJECT_NAME} z elf bpf)

install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION bin)