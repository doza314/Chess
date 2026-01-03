#pragma once

#include <iostream>
#include <vector>
#include <cmath>
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"

class piece
{
  public: 
  
    piece()
    {

    }

  private: 
    std::vector<std::vector<int>> moves;
};
