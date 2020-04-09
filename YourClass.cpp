//
// Created by Austin Grover on 4/7/20.
//

#include "YourClass.h"
#include <string>
using namespace std;

string YourClass::getName() const {
    return name;
}

void YourClass::setName(string basicString) {

}

string YourClass::getAge() const {
    return age;
}

void YourClass::setAge(string basicString) {

}

string YourClass::getOverall() const {
    return overall;
}

void YourClass::setOverall(string basicString) {

}

string YourClass::getNationality() const {
    return nationality;
}

void YourClass::setNationality(string basicString) {

}

string YourClass::getClub() const {
    return club;
}

void YourClass::setClub(string basicString) {

}

ostream &operator<<(ostream &tooutput, const YourClass &example) {
//    output << "Name: " <<example.name << endl;
//    output << "Age: " <<example.age << endl;
//    output << "Overall: " <<example.overall << endl;
//    output << "Nationality: " << example.nationality << endl;
//    output << "Club:" << example.club << endl;
    string toOutput;
    toOutput.append("name: ");
    toOutput.append(example.playerName);
    toOutput.append("Age: ");
    toOutput.append(example.playerAge);
    toOutput.append("Nationality: ");
    toOutput.append(example.playerNationality);
    toOutput.append("Club: ");
    toOutput.append(example.playerClub);
    toOutput.append("Overall: ");
    toOutput.append(example.playerOverall);
    return toOutput;

    //return output;

}


bool YourClass::operator<(YourClass player){
    return (this->getName()<player.getName());
}
bool YourClass::operator<=(YourClass player){
    return (this->getName()<=player.getName());
}
bool YourClass::operator>(YourClass player){
    return (this->getName()>player.getName());
}
bool YourClass::operator>=(YourClass player){
    return (this->getName()>=player.getName());
}
bool YourClass::operator==(YourClass player){
    return (this->getName()==player.getName());
}

YourClass::YourClass() {

}

YourClass::~YourClass() {

}







