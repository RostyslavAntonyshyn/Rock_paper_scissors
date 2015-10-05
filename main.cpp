#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    char answ;


    do
    {
        cout << "Enter Rock, Scissors or Paper:" << endl
                  << "0 - rock" << endl
                  << "1 - scissors" << endl
                  << "2 - paper" << endl;

        int persWeapon;
        bool a(1);

        // Checking whether the input is correct or no
        do
        {
            cin >> persWeapon;
            if(persWeapon < 0 || persWeapon > 2)
            {
                cout << "Wrong input! Try again... ";
            }
                else a = 0;
        }while(a);


        int compWeapon = rand() % 3;

        // Calculating winner
        switch(compWeapon)
        {
            case 0:
                cout << "Computer selected rock... ";
                cout << ((persWeapon == 0) ? ("Draw...")
                                     : (persWeapon == 1) ? ("You lose...")
                                                          : ("You win..."));
                break;
            case 1:
                cout << "Comuter selected scissors... ";
                cout << ((persWeapon == 1) ? ("Draw...")
                                     : (persWeapon == 2) ? ("You lose...")
                                                          : ("You win... "));
                break;
            case 2:
                cout << "Computer selected paper... ";
                cout << ((persWeapon == 2) ? ("Draw...")
                                     : (persWeapon == 0) ? ("You lose...")
                                                          : ("You win..."));
                break;
                return 0;
        }

        cout << endl << "Retry?" << endl;
        cin >> answ;
        system("cls");

    } while(answ == 'y' || answ == 'Y');

    return 0;
}
