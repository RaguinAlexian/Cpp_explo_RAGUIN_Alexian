#include <iostream>
#include <string>

int main()
{
    int choix;
    std::cout << "Veuillez choisir votre chemin, 1 étant celui de droite et 2 celui de gauche." << std::endl;
    std::cin >> choix;
    if (choix == 1)
    {
        std::cout << "Vous avez choisi le chemin de droite" << std::endl;
    }
    else if (choix == 2)
    {
        std::cout << "Vous avez choisi le chemin de gauche" << std::endl;
    }
    return 0;
}