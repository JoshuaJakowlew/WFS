cmake_minimum_required( VERSION 3.9 )
set( CMAKE_TOOLCHAIN_FILE "C:/vcpkg/scripts/buildsystems/vcpkg.cmake" )

# Create Project
set( PROJECT_NAME "WFS" )
project( ${PROJECT_NAME} CXX )

set(SRC
  ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
)

add_executable( WFS src/main.cpp src/window.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/inc
    )

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_20)


# Find Package
find_package(SDL2 CONFIG REQUIRED)

if( SDL2_FOUND )
  # Additional Include Directories
  include_directories( ${SDL2_INCLUDE_DIRS} )

  # Additional Library Directories
  link_directories( ${SDL2_LIB_DIR} )

  # Additional Dependencies
  target_link_libraries(WFS PRIVATE SDL2::SDL2 SDL2::SDL2main)
endif()



# Find Package
find_package(sdl2-mixer CONFIG REQUIRED)

if( sdl2-mixer_FOUND )
  # Additional Include Directories
  include_directories( ${SDL2_INCLUDE_DIRS} )

  # Additional Library Directories
  link_directories( ${SDL2_LIB_DIR} )

  # Additional Dependencies
  target_link_libraries(WFS PRIVATE SDL2::SDL2_mixer)
endif()

find_package(sdl2-image CONFIG REQUIRED)

if( sdl2-image_FOUND )
  # Additional Include Directories
  include_directories( ${SDL2_INCLUDE_DIRS} )

  # Additional Library Directories
  link_directories( ${SDL2_LIB_DIR} )

  # Additional Dependencies
  target_link_libraries(WFS PRIVATE SDL2::SDL2_image)
endif()