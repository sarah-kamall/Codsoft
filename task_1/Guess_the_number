#include <iostream>
#include <random>
#include<time.h>
int main()
{
    int randomnum;
    int guess;

    srand(time(0));
    randomnum = rand()%100;
    std::cout << randomnum;
    std::cout << "Play :Guess the number: \n";
    std::cout << "Enter -1 to quit: \n";
    while (true)
    {
        std::cout << "Guess the number: \n";
        std::cin >> guess;
        if (guess == -1)
            break;
        if (guess  > randomnum)
            std::cout << "Guess a smaller number\n";
        else if (guess  < randomnum)
            std::cout << "Guess a greater number\n";
        else if (guess == randomnum)
        {
            std::cout << "Correct guess\n";
            break;
        }
        else
            std::cout << "invalid number, Try again\n";
    }
    std::cout << "Good game!\n";

}
