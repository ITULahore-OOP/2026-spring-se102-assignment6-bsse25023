#ifndef GUILD_H
#define GUILD_H
#include <iostream>
#include "Hero.h"
using namespace std;
// this is my guild class 
class Guild{
string guildName;
Hero* roster[15];
int memberCount;
public:
// constructor and member functions below 
Guild(string nam="");
void operator+=(Hero* newHero); // operator overloading 
friend ostream& operator<<(ostream &out, Guild &g); // again operator overloading 
int calculateTotalGuildPower();
void displayGuildStats();
~Guild();
};

#endif