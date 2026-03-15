#ifndef WARRIOR_H
#define WARRIOR_H
#include "Hero.h"
#include <string>
// this is my warrior class 
class Warrior : public Hero{
int armorRating;
public:
// constructor and member function below 
    Warrior(string na="", int he=0, int po=0, int ar=0);
    int calculateEffectiveHealth();
};

#endif