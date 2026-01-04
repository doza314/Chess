#pragma once

#include <iostream>
#include <string>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

class menu
{
  public:
    menu();
    ~menu() = default;

    void run(int type);

    
  private:
    static std::string resDir;
    sf::RenderWindow menuWindow;
    sf::RectangleShape menuBackground;

    sf::Sprite logo;
    sf::Texture logoTexture; 
    
    sf::Sprite gameOver;
    sf::Texture gameOverTexture;
}; 
