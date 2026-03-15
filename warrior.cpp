#include "Warrior.h"
#include <iostream>
#include <string>
using namespace std; 
// this is my warrior class 
// I have defined the cosntructor below 
Warrior::Warrior(string na, int he, int po, int ar) : Hero(na,he,po){
    // initializing the variables below 
    armorRating = ar;
}  // following is my member function 
int Warrior::calculateEffectiveHealth()
{ return getHealth() + (armorRating * 2);
} // this function will return an int value 
// my warrior class ends here 