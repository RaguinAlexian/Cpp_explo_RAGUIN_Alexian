#ifndef REFUGE_H
#define REFUGE_H

#include <string>
#include "Lieu.cpp"

class Refuge : public Lieu{
    public:
        Refuge();
        Refuge(std::string nom);
};
#endif