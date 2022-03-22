#ifndef LIEU_CPP
#define LIEU_CPP

#include "lieu.h"

Lieu::Lieu() : _nom("Lieu1"), _description("Foret"), _difficulty(1), _tableau(1) {}
Lieu::Lieu(std::string name, std::string description, std::string difficult, int valeur) : _nom(name), _description(description, _difficulty(difficult), _value(valeur)) {}

std::string Lieu::getDescription()
{
    return _description;
}
std::string Lieu::getNom()
{
    return _nom;
}
int Lieu::getDifficult()
{
    return _difficulty;
}
void addToList()
{
    _tableau.push_back(_value);
}
void Lieu::getList()
{
   for(int i =0; i<_tableau.size(); i++){
      std::cout << _tableau(i);
   } 
}

#endif