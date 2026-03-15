#ifndef KNIGHT_H
#define KNIGHT_H
#include "Warrior.h"
#include <iostream>
#include <string>
// this is my knight class 
// inheritance is happening here 
class Knight : public Warrior{
 int chargeBonus;
public:
// following is my comstructor and member functions 
Knight(string na="", int he=0, int po=0, int ar=0, int ch=0);
int calculateBurstDamage();
};

#endif