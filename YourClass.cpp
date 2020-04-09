//
// Created by Austin Grover and James Cook on 4/7/20.
//

#include "YourClass.h"
#include <string>
using namespace std;

//implement getters and setters
string YourClass::getName() const {
    return name;
}

void YourClass::setName(string playerName) {
    name = playerName;

}

string YourClass::getAge() const {
    return age;
}

void YourClass::setAge(string playerAge) {
    age = playerAge;
}

string YourClass::getOverall() const {
    return overall;
}

void YourClass::setOverall(string playerOverall) {
    overall = playerOverall;

}

string YourClass::getNationality() const {
    return nationality;
}

void YourClass::setNationality(string playerNationality) {
    nationality = playerNationality;

}

string YourClass::getClub() const {
    return club;
}

void YourClass::setClub(string playerClub) {
    club = playerClub;

}

//operator overloaders
ostream &operator<<(ostream &output, const YourClass &example) {
    output << "Name: " <<example.name << endl;
    output << "Age: " <<example.age << endl;
    output << "Overall: " <<example.overall << endl;
    output << "Nationality: " << example.nationality << endl;
    output << "Club: " << example.club << endl;

    return output;
}


bool YourClass::operator<(const YourClass& player){
    return (this->getName()<player.getName());
}
bool YourClass::operator<=(const YourClass& player){
    return (this->getName()<=player.getName());
}
bool YourClass::operator>(const YourClass& player){
    return (this->getName()>player.getName());
}
bool YourClass::operator>=(const YourClass& player){
    return (this->getName()>=player.getName());
}
bool YourClass::operator==(const YourClass& player){
    return (this->getName()==player.getName());
}

YourClass::YourClass() {

}

YourClass::~YourClass() {

}







