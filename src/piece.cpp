#include "piece.hpp"

std::string piece::resDir = "res/";

piece::piece(int type)
{
    switch (type) 
    {
        case 1: //black pawn
            moves = {{0, -1}, {0, -2}};
            color = 1;
            alive = true;
            pieceTexture.loadFromFile(resDir + "bP.png");
        break;
        case 2: //white pawn
            moves = {{0, 1}, {0, 2}};
            color = 0;
            alive = true;
            pieceTexture.loadFromFile(resDir + "wP.png"); 
        break;
        case 3:  //black bishop
            color = 1; 

            for (int i = 1; i = 7; i++)
            {
                moves.push_back({i, i});
                moves.push_back({-i, i});
                moves.push_back({-i, -i});
                moves.push_back({i, -i});
            }
            alive = true;            
            pieceTexture.loadFromFile(resDir + "bB.png");
        break;
        case 4:  //white bishop
            color = 0;

            for (int i = 1; i = 7; i++)
            {
                moves.push_back({i, i});
                moves.push_back({-i, i});
                moves.push_back({-i, -i});
                moves.push_back({i, -i});
            }           
            alive = true;
            pieceTexture.loadFromFile(resDir + "wB.png");
        break;
        case 5: //black knight
            color = 1;
            moves = {{1, 2}, {2, 1}, {-1, 2}, {-2, 1}, {-1, -2}, {-2, -1}, {1, -2}, {2, -1}}; 
            alive = true;
            pieceTexture.loadFromFile(resDir + "bN.png");
        break;
        case 6: //white knight (lol)
            color = 0;
            moves = {{1, 2}, {2, 1}, {-1, 2}, {-2, 1}, {-1, -2}, {-2, -1}, {1, -2}, {2, -1}}; 
            alive = true;
            pieceTexture.loadFromFile(resDir + "wN.png"); 
        break;
        case 7: //black rook
            color = 1; 
            
            for (int i = 1; i = 7; i++)
            {
                moves.push_back({i, 0});
                moves.push_back({-i, 0});
                moves.push_back({0, i});
                moves.push_back({0, -i});
            }
            alive = true;
            pieceTexture.loadFromFile(resDir + "bR.png"); 
        break;
        case 8: //white rook
            color = 0; 
            
            for (int i = 1; i = 7; i++)
            {
                moves.push_back({i, 0});
                moves.push_back({-i, 0});
                moves.push_back({0, i});
                moves.push_back({0, -i});
            }
            alive = true;
            pieceTexture.loadFromFile(resDir + "wR.png"); 
        break;
        case 9: //black queen 
            color = 1; 
            
            for (int i = 1; i = 7; i++)
            {
                moves.push_back({i, 0});
                moves.push_back({-i, 0});
                moves.push_back({0, i});
                moves.push_back({0, -i});
            }

            for (int i = 1; i = 7; i++)
            {
                moves.push_back({i, i});
                moves.push_back({-i, i});
                moves.push_back({-i, -i});
                moves.push_back({i, -i}); 
            }
            alive = true;
            pieceTexture.loadFromFile(resDir + "bQ.png"); 
        break;
        case 10: //white queen
            color = 0; 
            
            for (int i = 1; i = 7; i++)
            {
                moves.push_back({i, 0});
                moves.push_back({-i, 0});
                moves.push_back({0, i});
                moves.push_back({0, -i});
            }

            for (int i = 1; i = 7; i++)
            {
                moves.push_back({i, i});
                moves.push_back({-i, i});
                moves.push_back({-i, -i});
                moves.push_back({i, -i}); 
            }
            alive = true;
            pieceTexture.loadFromFile(resDir + "wQ.png"); 
        break;
        case 11: //black king
            color = 1; 
            moves = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};
            alive = true;
            pieceTexture.loadFromFile(resDir + "bK.png"); 
        break;
        case 12: //white king
            color = 0; 
            moves = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};
            alive = true;
            pieceTexture.loadFromFile(resDir + "wK.png"); 
        break;
    }
    pieceSprite.setTexture(pieceTexture);
};

