cmake_minimum_required(VERSION 3.23)
project(FirstSFML)

set(CMAKE_CXX_STANDARD 14)

add_executable(FirstSFML main.cpp Arrow.cpp Arrow.h values.h background.cpp background.h)

set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR C:/SFML-2.5.1/lib/cmake/SFML)
find_package(SFML COMPONENTS system window graphics audio network REQUIRED)

include_directories(C:/SFML-2.5.1/include)
target_link_libraries(FirstSFML sfml-system sfml-window sfml-graphics sfml-audio)
file(COPY "arial.ttf" DESTINATION "/")