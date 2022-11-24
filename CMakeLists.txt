cmake_minimum_required(VERSION 3.23)
project(snake3)

set(CMAKE_CXX_STANDARD 14)

add_executable(snake3 main.cpp header/helper.h header/my_snake.h header/triangle_2d.h header/torus.h header/comet_rider.h header/lit_solid_3D.h header/moon.h header/bouncingballs3D.h header/fish.h)
target_link_libraries(snake3 -lOpenGL32 -lfreeGLUT -lGLU32)
