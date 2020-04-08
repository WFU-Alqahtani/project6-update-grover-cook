//
// Created by Austin Grover on 4/7/20.
//

#include "YourClass.h"
using namespace std;



string YourClass::getName() const {
    return name;
}

void YourClass::setName(string playerName) {
    name = playerName;
}



string YourClass::getAge() const {
    return age;
}

void YourClass::setAge(int playerAge) {
    age = playerAge;
}

//void YourClass::setAge() {
//}



string YourClass::getOverall() const {
    return overall;
}

void YourClass::setOverall(int playerOverall) {
    overall = playerOverall;
}

//void YourClass::setOverall() {
//}



string YourClass::getNationality() const {
    return nationality;
}

void YourClass::setNationality(string playerNationality) {
    nationality = playerNationality;
}

//void YourClass::setNationality() {
//}

string YourClass::getClub() const {
    return club;
}

void YourClass::setClub(string playerClub) {
    club = playerClub;
}

//void YourClass::setClub() {
//}

ostream &operator<<(ostream &output, const YourClass &example) {
    output << "Name: " <<example.name<<endl;
    output << "Age: " <<example.age<<endl;
    output << "Overall: " <<example.overall<<endl;
    output << "Nationality: " << example.nationality<<endl;
    output << "Club" << example.club<<endl;

}



ostream &operator>>(ostream &output, const YourClass &example) {
    output << "Name: " <<example.name<<endl;
    output << "Age: " <<example.age<<endl;
    output << "Overall: " <<example.overall<<endl;
    output << "Nationality: " << example.nationality<<endl;
    output << "Club" << example.club<<endl;
}

bool YourClass::operator>(const YourClass& example) {
    return true;
}

