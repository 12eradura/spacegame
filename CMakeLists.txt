cmake_minimum_required(VERSION 3.2)

project(spacegame VERSION 0.1 DESCRIPTION "a simple space game")

# Use C++11 standard for compiling
set(CMAKE_CXX_STANDARD 11)

# Build dependencies from sources
add_subdirectory(dependencies/SFGUI-0.4.0)

# Find SFML library
find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

# Bring all files with extension .cpp in src/ into the project
file(GLOB SOURCES "src/*.cpp")

# Add all sources to target
add_executable(spacegame ${SOURCES} dependencies/json/src/jsoncpp.cpp)

# Add paths to includes
target_include_directories(spacegame PUBLIC dependencies/json/include)
target_include_directories(spacegame PUBLIC dependencies/SFGUI-0.4.0/include)
target_include_directories(spacegame PUBLIC include)

# Linking
target_link_libraries(spacegame sfml-graphics sfml-window sfml-system SFGUI)


