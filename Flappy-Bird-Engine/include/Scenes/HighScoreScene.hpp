//
//  HighScoreScene.hpp
//  FlappyBird
//
//  Created by Kyle Hurd on 11/25/20.
//  Copyright © 2020 Kyle Hurd. All rights reserved.
//
//  Description
//
//  HighScoreScene is a subset of MenuScene. The scene is very simple
//  and only displays the top 10 scores from the game. These high scores
//  are saved within the FlappyBirdData.csv file located in ./Resources.
//  The user can go back to the MenuScene by pressing 'M'.
//
#ifndef HighScoreScene_hpp
#define HighScoreScene_hpp

// SFML Files
#include <SFML/Graphics.hpp>

namespace HighScoreScene {

void highscore(sf::RenderWindow &);

}

#endif /* HighScoreScene_hpp */
