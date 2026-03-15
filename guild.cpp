#include "Guild.h"
#include <iostream>
#include <string>
using namespace std;
// this is my guild class 
// constructor is defined below 
Guild::Guild(string nam){
guildName = nam;  // initialize the constructor 
memberCount = 0;
} // following are the member functions 
// operator overloading as below 
void Guild::operator+=(Hero* newHero){
    // applying the check 
if(memberCount < 15){
    // by using the if else 
roster[memberCount] = newHero;
memberCount++; // updating the count variable 
 } else{
cout<<"Guild is at full capacity!"<<endl;
}
}   // again operator overloading 
ostream& operator<<(ostream &out, Guild &g){
out << "Guild: " << g.guildName << endl;
out << "Members: " << g.memberCount << endl;
// by applying the for lloop 
for(int i = 0; i < g.memberCount; i++){
out << "- " << g.roster[i]->getName()<< " (Power: "<< g.roster[i]->getPower()<< ")" << endl;
 } return out;
}
// thisi  s my destructor 
Guild::~Guild(){
    // destructor will only print a statement 
cout<<"The guild "<<guildName<<" has been disbanded!"<<endl;
} // m,ember function defined below 
int Guild::calculateTotalGuildPower(){
    // initializing 
int total = 0;  // by applying for loop 
for(int i=0;i<memberCount;i++){
 total = total + roster[i]->getPower();
}return total;
}// this function will just print statemenrs 
void Guild::displayGuildStats()
{cout << "Guild Name: " << guildName << endl;
cout << "Total Members: " << memberCount << "/15" << endl;
cout << "Total Guild Power: " << calculateTotalGuildPower() << endl;
}