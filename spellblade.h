#ifndef SPELLBLADE_H
#define SPELLBLADE_H
#include "Warrior.h"
#include "MagicalEntity.h"
#include <string>
#include "hero.h"
// this class include inheritance as well 
class Spellblade : public Warrior, public MagicalEntity{
public:
//comstructor defined below 
Spellblade(string n="", int h=0, int p=0, int a=0, int sp=0);
// member function 
int calculateHybridDamage();
};

#endif