#include "Knight.h"
#include<iostream>
#include <string>
using namespace std;
// this is my knight class 
// definition of constructor is as below 
Knight::Knight(string na, int he, int po, int ar, int ch)
: Warrior(na,he,po,ar){
    // initiaaaling the constructor 
chargeBonus = ch;
} // following is my member functions 
int Knight::calculateBurstDamage(){
return getPower() + chargeBonus;
}
// my this class ends here 