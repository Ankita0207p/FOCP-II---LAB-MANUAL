//Compares scores of three players and determines the highest scorer as winner
#include <iostream>
int main()
{
    int score1, score2, score3;
    std::cout << "Enter scores of three players: \n";
    std::cout << "Player 1: ";
    std::cin >> score1;
    std::cout << "Player 2: ";
    std::cin >> score2;
    std::cout << "Player 3: ";
    std::cin >> score3;

    if (score1 > score2 && score1 > score3)
    {std::cout << "Player 1 is the winner with a score of " << score1 << ".\n";}

    else if (score2 > score1 && score2 > score3)
    {std::cout << "Player 2 is the winner with a score of " << score2 << ".\n";}

    else if (score3 > score1 && score3 > score2)
    {std::cout << "Player 3 is the winner with a score of " << score3 << ".\n";}
    
    else
    {std::cout << "It's a tie among the players.\n";}

    return 0;
}