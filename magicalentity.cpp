#include "MagicalEntity.h"
#include <iostream>
#include <string>
using namespace std; 
// this is my magical entity class 
// first I will initialzie the constructor 
MagicalEntity::MagicalEntity(string na, int he, int po, int sp)
: Hero(na,he,po){
spellPower = sp;
} // done initialzing the constructor 
// my this class ends here 