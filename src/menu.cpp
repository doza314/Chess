#include "menu.hpp"
#include <vector>

std::string menu::resDir = "res/";

menu::menu()
: menuWindow(sf::VideoMode(400, 300), "CHESS"),
  menuBackground(sf::Vector2f(400, 300))
{ 

  menuBackground.setFillColor(sf::Color(255, 255, 255, 128));
  menuBackground.setPosition(0, 0); 
}

void menu::run(int type)
{
  switch (type)
  {
    case 0: //start menu
      logoTexture.loadFromFile(resDir + "logo.png");
      logo.setTexture(logoTexture);
      
      while(menuWindow.isOpen())
      {
        sf::Event event;
        while(menuWindow.pollEvent(event))
        {
           
        }
      } 
    break; 
    case 1: //pause menu
      
      while(menuWindow.isOpen())
      {
        sf::Event event;
        while(menuWindow.pollEvent(event))
        {

        }
      }
    break;
    case 2: //end menu

      while(menuWindow.isOpen())
      {
        sf::Event event;
        while(menuWindow.pollEvent(event))
        {

        }
      }
    break;
  }
  logoTexture.loadFromFile(resDir + "logo.png");
  logo.setTexture(logoTexture);
      
  while(menuWindow.isOpen())
  {
    sf::Event event;
    while(menuWindow.pollEvent(event))
    {
           
    }
  }  
}