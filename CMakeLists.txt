cmake_minimum_required(VERSION 3.1)

project(actions-test)

add_executable(actions-test src/main.cpp)
target_include_directories(actions-test PRIVATE include)
target_link_libraries(actions-test PRIVATE "-static-libgcc" "-static-libstdc++" "-static")
