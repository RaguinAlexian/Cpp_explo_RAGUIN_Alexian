#include <iostream>
#include <string>
#include "lieu.cpp"

// Exo 1

/*int main()
{
    int choix;
    while(choix != 1 || choix !=2){
        std::cout << "Veuillez choisir votre chemin, 1 étant celui de droite et 2 celui de gauche." << std::endl;
        std::cin >> choix;
    }
    if (choix == 1)
    {
        std::cout << "Vous avez choisi le chemin de droite" << std::endl;
    }
    else if (choix == 2)
    {
        std::cout << "Vous avez choisi le chemin de gauche" << std::endl;
    }
    return 0;
} */

// Exo 2

/* int main()
{
    std::string choix;
    while (choix != "gauche" || choix != "droite")
    {
        std::cout << "Veuillez choisir votre chemin, 'droite' ou 'gauche'." << std::endl;
        std::cin >> choix;
    }
    if (choix == "droite")
    {
        std::cout << "Vous avez choisi le chemin de droite" << std::endl;
    }
    else if (choix == "gauche")
    {
        std::cout << "Vous avez choisi le chemin de gauche" << std::endl;
    }
    return 0;
} */

//Exo 3

int main(){
    Lieu * monLieu1;
    Lieu * monLieu2;
    Lieu * monLieu3;

    monLieu1 = new Lieu("Foret","Foret dense dont la lumière peine à passer les feuillages",1,1);
    monLieu2 = new Lieu("Caverne", "Caverne dont le chemin est pavé de torches fraichement posée",10,2);
    monLieu3 = new Lieu("Chateau","Le chateau de la fin",19,3);


    return 0;
}