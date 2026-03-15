#include "Spellblade.h"
#include <iostream>
using namespace std; 
#include <string>
// innitializng the constructor 
Spellblade::Spellblade(string n, int h, int p, int armor, int sp)
: Warrior(n,h,p,armor), MagicalEntity(n,h,p,sp){
} // following are my member functions 
int Spellblade::calculateHybridDamage(){
    
return Warrior::getPower() + spellPower;
}