#ifndef LIEU_H
#define LIEU_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Lieu{
protected:
    std::string _nom;
    std::string _description;
    int _difficulty;
    std::vector<int> _tableau;

public:
    // Constructeurs
    Lieu();
    Lieu(std::string nom, std::string desc, int difficult, int value);

    std::string getDescription();
    std::string getNom();
    int getDifficult();
    void getList();
};

#endif