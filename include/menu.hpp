#include <iostream>
#include <string>
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"

class menu
{
  public:
    menu()
    {
    };
   
    int selection(int x, int y)
    {

    };
    
    void run()
    {

      sf::RenderWindow menuwindow(sf::VideoMode(400, 300), "CHESS");
      sf::RectangleShape background(sf::Vector2f(400, 300));
      background.setFillColor(sf::Color(255, 255, 255, 128));
      background.SetPosition(0, 0);
        

      sf::Sprite logo;
      sf::Texture logoTexture;

      logoTexture.loadFromFile(resDir + "logo.png");

    };

  private:
    std::string resDir = "res/";
}; 
