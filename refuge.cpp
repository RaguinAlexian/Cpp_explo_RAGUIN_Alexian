#ifndef REFUGE_CPP
#define REFUGE_CPP

#include "refuge.h"
#include <iostream>

Refuge::Refuge() : Lieu()
{
    _nom = "Refuge";
    _description = "Un endroit où se reposer";
    _difficulty = 0;
    _value = 2;
}
Refuge::Refuge(std::string name, std::string desc, int diff, int val)
{
    _nom = name;
    _description = desc;
    _difficulty = diff;
    _value = val;
}
int Refuge::repos(int endu)
{
    if (endu > 50)
    {
        endu = 100;
    }
    else
    {
        endu = endu + 50;
    }
    return endu;
}
#endif