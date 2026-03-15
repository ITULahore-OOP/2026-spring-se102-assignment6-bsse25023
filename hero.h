#ifndef HERO_H
#define HERO_H
#include <iostream>
#include <string>
using namespace std;

class Hero{
    string name;
    int health;
    int basePower;
public:
    Hero(string na="", int he=0, int po=0);
// following are my getters and setters 
    string getName() const;
    int getHealth()const;
    int getPower();
// member functions below 
    void takeDamage(int damage);
// operator overloading below 
    bool operator>(Hero &other);

    int operator+(Hero &other);
};

#endif