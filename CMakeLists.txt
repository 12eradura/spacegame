cmake_minimum_required(VERSION 3.2)

project(spacegame)

# Bring all files with extension .cpp into the project
file(GLOB SOURCES "src/*.cpp")

# Find SFML library
find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

# Ask to specify a path to the binary containing built SFGUI library
# find_package(SFGUI 0.3.2 REQUIRED)
find_library(SFGUI_LIBRARY sfgui)

# Ask to specify a path to headers of SFGUI
set(SFGUI_INCLUDE_DIR "" CACHE FILEPATH "Specify path to SFGUI/Window.hpp, SFGUI/Widget.hpp and other headers of SFGUI")

# Debug output of specified variables
message("SFGUI_INCLUDE_DIR = " ${SFGUI_INCLUDE_DIR})
message("SFGUI_LIBRARY = " ${SFGUI_LIBRARY})

# Add all sources to buildingg target
add_executable(spacegame ${SOURCES} src/json/jsoncpp.cpp)

# Add paths to includes
target_include_directories(spacegame PUBLIC ${SFGUI_INCLUDE_DIR})
target_include_directories(spacegame PUBLIC include)

# Link
target_link_libraries(spacegame sfml-graphics sfml-window sfml-system ${SFGUI_LIBRARY})


