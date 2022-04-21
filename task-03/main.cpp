#include "guessingGame.h"

int main ()
{
    const std::string high_scores_filename = "high_scores.txt";
    int attempts_count = 0;
    std::string user_name;
    bool var = true;

    while(var)
    {
        switch (menuGame())
        {
        case 1:
            imputUsername(user_name);
            checkValue(attempts_count);
            write(user_name, high_scores_filename, attempts_count);
            break;
        case 2:
            read(high_scores_filename);
            break;
        case 3:
            var = endGame();
            break;
        
        default:
            std::cout << "ERROR: only choose 1, 2, 3" << std::endl;
            break;
        }
    }
    return 0;
}