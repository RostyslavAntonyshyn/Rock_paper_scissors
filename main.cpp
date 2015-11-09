// Hometask #1 //

#include <iostream>
#include <string>
#include <ctime>

int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));
    char answer;

    do
    {
        std::cout << "Enter Rock, Scissors or Paper:" << std::endl;

        std::string persWeapon;
        bool a{1};

        // Checking whether the input is correct or no
        do
        {
            std::cin >> persWeapon;
            if(!(persWeapon == "rock" || persWeapon == "r" ||
                    persWeapon == "paper" || persWeapon == "p" ||
                    persWeapon == "scissors" || persWeapon == "s"))
            {
                std::cout << "Wrong input! Try again... ";
            }
            else a = 0;

        }while(a);


        int compWeapon = rand() % 3;

        // Calculating winner
        switch(compWeapon)
        {
            case 0:
               std::cout << "Computer selected rock... ";
               std:: cout << ((persWeapon == "rock" || persWeapon == "r") ? ("Draw...")
                                     : (persWeapon == "scissors" || persWeapon == "s") ? ("You lose...")
                                                                                       : ("You win..."));
                break;
            case 1:
                std::cout << "Comuter selected scissors... ";
                std::cout << ((persWeapon == "scissors" || persWeapon == "s") ? ("Draw...")
                                     : (persWeapon == "paper" || persWeapon == "p") ? ("You lose...")
                                                                                    : ("You win... "));
                break;
            case 2:
                std::cout << "Computer selected paper... ";
                std::cout << ((persWeapon == "paper" || persWeapon == "p") ? ("Draw...")
                                     : (persWeapon == "rock" || persWeapon == "r") ? ("You lose...")
                                                          : ("You win..."));
                break;
                return 0;
        }

        std::cout << std::endl << "Retry?" << std::endl;
        std::cin >> answer;
        system("cls");

    } while(answer == 'y' || answer == 'Y');

    return 0;
}
