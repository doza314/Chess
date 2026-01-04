#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>

class button
{
    public:
        button(char type);
        
    private: 
        int pos[2]; 
        int width;
        int height; 
        int state; //0 => not pressed, 1 => actively being pressed, 2 => pressed and released (selected). 
        
        sf::Texture buttonTexture;
        sf::Sprite buttonSprite;
        
        sf::Texture hoverTexture;
        sf::Sprite hoverSprite;

        sf::Texture pressedTexture;
        sf::Sprite pressedSprite;
};