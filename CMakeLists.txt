cmake_minimum_required( VERSION 3.9 )
set( CMAKE_TOOLCHAIN_FILE "C:/devsoft/vcpkg/scripts/buildsystems/vcpkg.cmake" )

# Create Project
set( PROJECT_NAME WFS )
project( ${PROJECT_NAME} CXX )

set(SRC
  ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
)

add_executable(${PROJECT_NAME} 
                                        main.cpp 
                                        Engine/Components/IO/Keyboard.cpp 
                                        Engine/Components/Entity/Entity.cpp 
                                        Engine/Components/Audio/Audio.cpp
                                        Engine/Components/Physics/Transform.cpp
                                        Engine/Components/AI/AI.cpp 
                                        Engine/Components/Render/Render.cpp 
                                        Engine/Core/Core.cpp 
                                        Engine/Systems/Physics/MovementSystem.cpp  

                                        )

target_include_directories(${PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ./Engine/Components/IO
    ./Engine/Components/Entity
    ./Engine/Components/Core
    ./Engine/Systems/Physics
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
  target_link_libraries(${PROJECT_NAME} PRIVATE SDL2::SDL2 SDL2::SDL2main)
endif()


# Find Package
find_package(sdl2-mixer CONFIG REQUIRED)

if( sdl2-mixer_FOUND )
  # Additional Include Directories
  include_directories( ${SDL2_INCLUDE_DIRS} )

  # Additional Library Directories
  link_directories( ${SDL2_LIB_DIR} )

  # Additional Dependencies
  target_link_libraries(${PROJECT_NAME} PRIVATE SDL2::SDL2_mixer)
endif()


# Find Package
find_package(sdl2-image CONFIG REQUIRED)

if( sdl2-image_FOUND )
  # Additional Include Directories
  include_directories( ${SDL2_INCLUDE_DIRS} )

  # Additional Library Directories
  link_directories( ${SDL2_LIB_DIR} )

  # Additional Dependencies
  target_link_libraries(${PROJECT_NAME} PRIVATE SDL2::SDL2_image)
endif()

# Find Package
find_package(EnTT CONFIG REQUIRED)

if( EnTT_FOUND )
  # Additional Include Directories
  include_directories( ${EnTT_INCLUDE_DIRS} )

  # Additional Library Directories
  link_directories( ${EnTT_LIB_DIR} )

  # Additional Dependencies
  target_link_libraries(${PROJECT_NAME} PRIVATE EnTT::EnTT)
endif()

find_package(glm CONFIG REQUIRED)
if ( glm_FOUND )
    # Additional Include Directories
    include_directories( ${glm_INCLUDE_DIRS} )

    # Additional Library Directories
    link_directories( ${glm_LIB_DIR} )

    # Additional Dependencies
    target_link_libraries(${PROJECT_NAME} PRIVATE glm::glm)
endif()