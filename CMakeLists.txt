# Visual Studio Code IDE extension for CMake
# https://marketplace.visualstudio.com/items?itemName=ms-vscode.cmake-tools

# a related project, used here
# https://github.com/edubart/minilua

# ninja is often used by cmake, so install it when needed
# pacman -S mingw-w64-x86_64-ninja # for Ninja build system in MSYS+MINGW64

# cmake -S . -B build && cmake --build build && build/app

# cmake -S . -B build -G "Ninja" && cmake --build build && build/app
# cmake -S . -B build -G "CodeBlocks - Ninja" && cmake --build build && build/app
# cmake -S . -B build -G "Visual Studio 17 2022" && cmake --build build && build/app

cmake_minimum_required(VERSION 3.18)
project( app VERSION 0.1 )

file(GLOB SOURCE_FILES "*.c*" )
add_executable(app ${SOURCE_FILES})

# link with libm (math library), needed e.g. in GNU/Linux setting
target_link_libraries(${PROJECT_NAME} m)
