project(Flappy-Bird-Engine)

find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)
include_directories(${SFML_INCLUDE_DIRS})
   
add_library(${PROJECT_NAME}
    # Scenes
    src/Scenes/ChangeNameScene.cpp
    src/Scenes/CreditScene.cpp
    src/Scenes/GameScene.cpp
    src/Scenes/HighScoreScene.cpp
    src/Scenes/InvadersScene.cpp
    src/Scenes/LoadingScene.cpp
    src/Scenes/MenuScene.cpp

    # Sprites
    src/Sprites/Bird.cpp
    src/Sprites/Enemy.cpp
    src/Sprites/helperFunctions.cpp
    src/Sprites/Laser.cpp
    src/Sprites/Pipes.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/include)
target_link_libraries(${PROJECT_NAME}
    sfml-system
    sfml-window
    sfml-graphics
    sfml-audio
    sfml-network)
