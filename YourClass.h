//
// Created by Austin Grover on 4/7/20.
//
#ifndef BINARYINSERTIONSORT_YOURCLASS_H
#define BINARYINSERTIONSORT_YOURCLASS_H

#include <iostream>
using namespace std;

class YourClass{
public:

    YourClass();
    ~YourClass();
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

    void setName(string basicString);
    void setAge(string basicString);
    void setOverall(string basicString);
    void setNationality(string basicString);
    void setClub(string basicString);

private:
    string getName()const;
    string getAge()const;
    string getOverall()const;
    string getNationality()const;
    string getClub()const;

};

#endif //BINARYINSERTIONSORT_YOURCLASS_H
