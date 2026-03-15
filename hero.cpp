#include "Hero.h"
#include <iostream>
using namespace std;
// following is my hero class 
// first I will initialize my constructor 
Hero::Hero(string na, int he, int po)
{  name = na;  // initialzing the variables 
health = he;
 basePower = po;}
 // following are my getters and setters 
string Hero::getName() const{
    return name;
} // these are simple getters setters 

int Hero::getHealth()const{ 
    return health;
}
int Hero::getPower(){ 
    return basePower;
}
// this is my member function 
void Hero::takeDamage(int damage){
    health = health - damage;
    // applying the check and keeping health = 0
    if(health < 0)
     health = 0;
} // operator overloading is as follows 
bool Hero::operator>(Hero &other)
{ return basePower > other.basePower;
}
int Hero::operator+(Hero &other)
{return health + other.health;
}
// my this class ends here 