#pragma once

#include <iostream>
#include <cmath>
#include <vector>
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"

class game
{
  public: 
    game()
    {
    }

  private: 
    int board[8][8] =            //White => Even, Black => Odd 
    {{7, 5, 3, 9, 11, 3, 5, 7},
     {1, 1, 1, 1, 1, 1, 1, 1},
     {0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0},
     {2, 2, 2, 2, 2, 2, 2, 2},
     {8, 6, 4, 10, 12, 4, 6, 8}};
    
    int turn = 0; //White => Even, Black => Odd
    
     

};
