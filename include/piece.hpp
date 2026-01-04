#pragma once

#include <iostream>
#include <vector>
#include <cmath>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

class piece
{
  public: 
  
    piece(int type);
    ~piece() = default;

  private: 
    std::vector<std::vector<int>> moves; //{horizontal, vertical}
    int color; //0 = white, 1 = black
    bool alive; 
    sf::Texture pieceTexture;
    sf::Sprite pieceSprite;
    static std::string resDir;
};
