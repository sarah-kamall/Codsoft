

#include <iostream>
#include <random>
#include<conio.h>
#include<time.h>
#include"Board.h"
void game()
{
    std::cout << "Player one with symbol : x\nPlayer two with symbol: o\n";
    Board b;
    bool checkplayer1 = 1;
    char symb;
    char placement;
    static int player1sc=0, player2sc=0;
    while (1)
    {
        if (checkplayer1)
        {
             std::cout << "Player one's turn\n";
             symb = 'x';
        }  
        else
        {
            std::cout << "Player two's turn\n";
            symb = 'o';
        }
        std::cout << "Choose where to play: ";
        std::cin >> placement;
        while (placement < '1' || placement > '9')
        {
            std::cout << "Choose a vaild place to play: ";
            std::cin >> placement;
        }
        while (b.placesymb(placement - '0', symb) == -1)
        {
            std::cout << "Choose a vaild place to play: ";
            std::cin >> placement;
        }
        b.displayboad();
        if (b.checkifwin(placement - '0', symb))
        {
            if (checkplayer1)
            {
                std::cout << "Player one wins!\n";
                player1sc++;
            }
            else
            {
                std::cout << "Player two wins!\n";
                player2sc++;
            }
            std::cout << "player one's score: "<<player1sc<<" player two's score: "<<player2sc<<"\n";
            std::cout << "If you want to continue playing press 1\n";
            int y;
            std::cin >> y;
            if (y == 1)
                game();
        }
        else
            checkplayer1 = !checkplayer1;

            

        
    }

}
int main()
{
    system("Color 0A");
    game();

}
