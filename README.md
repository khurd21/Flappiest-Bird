# Flappy_Bird

<img
    src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white"
    alt="Website Badge" />
<img
    src="https://img.shields.io/badge/SFML-orange?style=for-the-badge&logo=SFML&logoColor=white"
    alt="SFML Badge" />
<img
    src="https://img.shields.io/badge/CMake-%23008FBA.svg?style=for-the-badge&logo=cmake&logoColor=white"
    alt="CMake Badge" />

Welcome to the Flappiest Bird! This was a group project for Cpts 122 at Washington State
University. It was a very fun and educational experience to learn how to put together
and replicate such an iconic game.

# Features or Flappiest Bird

- Set your three letter acronym (TLA) to be put on the scoreboard when you beat an existing high score.
- View the top 10 high scores your local instance.
- Play the `Normal Mode` edition, which utilizes the same game-play as the original Flappy Bird
- Play the `Flappy Invaders` edition, placing you against enemy birds to shoot down.

## Main Menu
<figure>
<img
    src="./README-Resources/Flappy-Bird/Menu.png"
    alt="Main Menu"
    width=35%
    height=auto />
</figure>

## High Scores
<figure>
<img
    src="./README-Resources/Flappy-Bird/High-Scores.png"
    alt="Main Menu"
    width=35%
    height=auto />
</figure>

## Normal Mode
<figure>
<img
    src="./README-Resources/Flappy-Bird/Normal-Mode.png"
    alt="Main Menu"
    width=35%
    height=auto />
</figure>

## Flappy Invaders
<figure>
<img
    src="./README-Resources/Flappy-Bird/Flappy-Invaders.png"
    alt="Main Menu"
    width=35%
    height=auto />
</figure>

# Technology Used

Flappiest Bird relies on the following tools:

- [C++](https://cplusplus.com)
- [SFML](https://www.sfml-dev.org)
- [CMake](https://cmake.org)

My programming environment used the following:

- [XCode](https://developer.apple.com/xcode/)
- [VSCode](https://code.visualstudio.com) (for modifying the README)
- [NeoVim](https://neovim.io) (for introducing CMake)

# How to Build

The original version relied on an IDE to run the project. In my case it was XCode. In an effort to
make this project more easily runnable for more people, I introduced CMake to help manage the building
process.

- Clone the Repository
- Install SFML

    - On the [SFML Website](https://www.sfml-dev.org/download.php), there is a page to download the necessary files.
    In my case, on MacOS, I used [Homebrew](https://brew.sh) to install SFML.

    ```shell
    brew install sfml
    ```
- Build the Project
    - Feel free to build the project using whatever tools you feel comfortable with. However, you can use the
    CMake CLI to build the project.
    ```shell
    mkdir -p build && cd build
    cmake ..
    make
    ./Flappy-Bird
    ```
    - NOTE: you can run the executable from the project root directory or the build directory.
    The resource files are copied to the build folder, so they will be found if the executable
    is started from the build directory.

