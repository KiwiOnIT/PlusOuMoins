#include <iostream>
#include <ctime>
using namespace std;

int main()
{

    std::srand(time(nullptr));

    int a = std::rand() % 100;
    int t = 10;

    std::cout << "jeu du + || - a vous de trouver le bon nombre (10 essais)\n";

    for (int i = 0; i < t; ++i)
    {

        std::cout << "Entre votre proposition :";

        int b = 0;
        std::cin >> b;
        std::cin.ignore();

        if (b == a)
        {
            std::cout << "Bravo !" << std::endl;
            std::cin.ignore();
            break;
        }

        else if (b < a)
        {
            std::cout << "Plus" << std::endl;
        }

        else if (b > a)
        {
            std::cout << "Moin" << std::endl;
        }

        if (i == t - 1)
        {
            std::cout << "Perdu ! Vous avez grille vos essais" << std::endl;
            std::cin.ignore();
        }
    }
    return 0;
}
