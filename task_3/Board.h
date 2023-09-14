#pragma once
#include <iostream>
#include"Player.h"
class Board
{
private:
    char boardel[3][3] = { {'1','2','3'} ,{'4','5','6'}, {'7','8','9'} };
    char boardplay[3][3] = { {'0','0','0'} ,{'0','0','0'}, {'0','0','0'} };

public:
    Board();
    void displayboad();
    bool checkifwin(int placement, char symb);
    bool checkrow(int row, int col, char symb);
    bool checkcol(int row, int col, char symb);
    bool checkdiag(int row, int col, char symb);
    int placesymb(int placement, char symb);
    int getrow(int placement);
    int getcol(int placement);

};
