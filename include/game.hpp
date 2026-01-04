#pragma once

#include <iostream>
#include <cmath>
#include <vector>w
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

class game
{
  public: 
    game(); 
    ~game() = default;

  private: 
    std::array<std::array<int, 8>, 8> board; 
    
    int turn = 0; //White => Even, Black => Odd
    int dim = 8;
     
    sf::RenderWindow window; 
    sf::Texture boardTexture;
    sf::Sprite boardSprite;
};
