cmake_minimum_required(VERSION 3.8)

project(spacegame VERSION 1.0 DESCRIPTION "a simple space game")

# Use C++11 standard for compiling
set(CMAKE_CXX_STANDARD 11)

# Build dependencies from sources
add_subdirectory(dependencies/SFGUI-0.4.0)

# Find SFML library
find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

# Bring source files in src/ directory into the project
set(SOURCE_FILES src/Background.cpp src/Camera.cpp src/Explosion.cpp
    src/Game.cpp src/GravityObject.cpp src/Menu.cpp src/SpaceObject.cpp src/Trajectory.cpp
    src/Vector2f.cpp src/BlackHole.cpp src/Coords.cpp src/Flame.cpp src/GameInterface.cpp
    src/main.cpp src/Ship.cpp src/Sprite.cpp src/Utils.cpp)

# Bring header files in include/ directory into the project
set(HEADER_FILES include/Background.hpp include/Camera.hpp include/Effect.hpp
    include/Flame.hpp include/GameInterface.hpp include/Menu.hpp include/SpaceObject.hpp 
    include/Trajectory.hpp include/Vector2f.hpp include/BlackHole.hpp include/Coords.hpp
    include/Explosion.hpp include/Game.hpp include/GravityObject.hpp include/Ship.hpp
    include/Sprite.hpp include/Utils.hpp)

# Add all sources to target
add_executable(spacegame ${SOURCE_FILES} ${HEADER_FILES}
    dependencies/json/include/json/json.h dependencies/json/include/json/json-forwards.h
    dependencies/json/src/jsoncpp.cpp)

# Add paths to includes
target_include_directories(spacegame PUBLIC dependencies/json/include)
target_include_directories(spacegame PUBLIC dependencies/SFGUI-0.4.0/include)
target_include_directories(spacegame PUBLIC include)

# Linking
target_link_libraries(spacegame sfml-graphics sfml-window sfml-system SFGUI)


