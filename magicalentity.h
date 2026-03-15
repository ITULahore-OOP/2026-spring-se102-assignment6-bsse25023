#ifndef MAGICALENTITY_H
#define MAGICALENTITY_H
#include "Hero.h"
#include <string>
// inheritance is happening in this class 
class MagicalEntity : public Hero {
protected:
int spellPower;
public:
// following is my constructor 
 MagicalEntity(string na="", int he=0, int po=0, int sp=0);
};

#endif