//
// Created by Austin Grover on 4/7/20.
//
#ifndef BINARYINSERTIONSORT_YOURCLASS_H
#define BINARYINSERTIONSORT_YOURCLASS_H

#include <iostream>
using namespace std;

class YourClass{
public:
    string name;
    string age;
    string overall;
    string nationality;
    string club;
    bool operator<(YourClass player);
    bool operator<=(YourClass player);
    bool operator>(YourClass player);
    bool operator>=(YourClass player);
    bool operator==(YourClass player);
    friend ostream &operator<<( ostream &output, const YourClass &example);

private:
    string getName()const;
    void setName();
    string getAge()const;
    void setAge();
    string getOverall()const;
    void setOverall();
    string getNationality()const;
    void setNationality();
    string getClub()const;
    void setClub();

};

#endif //BINARYINSERTIONSORT_YOURCLASS_H
