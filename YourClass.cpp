//
// Created by Austin Grover on 4/7/20.
//

#include "YourClass.h"
using namespace std;

string YourClass::getName() const {
    return nullptr;
}

void YourClass::setName() {

}

string YourClass::getAge() const {
    return 0;
}

void YourClass::setAge() {

}

string YourClass::getOverall() const {
    return 0;
}

void YourClass::setOverall() {

}

string YourClass::getNationality() const {
    return string();
}

void YourClass::setNationality() {

}

string YourClass::getClub() const {
    return string();
}

void YourClass::setClub() {

}



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

