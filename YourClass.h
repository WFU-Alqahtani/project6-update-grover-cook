//
// Created by Austin Grover and James Cook on 4/7/20.
//

#ifndef BINARYINSERTIONSORT_YOURCLASS_H
#define BINARYINSERTIONSORT_YOURCLASS_H

#include <iostream>
using namespace std;

class YourClass{
public:

    //constructor
    YourClass();

    //destructor
    ~YourClass();

    string name;
    string age;
    string overall;
    string nationality;
    string club;

    //operator overloaders
    bool operator<(const YourClass& player);
    bool operator<=(const YourClass& player);
    bool operator>(const YourClass& player);
    bool operator>=(const YourClass& player);
    bool operator==(const YourClass& player);
    friend ostream &operator<<( ostream &output, const YourClass &example);


    //setters
    void setName(string basicString);
    void setAge(string basicString);
    void setOverall(string basicString);
    void setNationality(string basicString);
    void setClub(string basicString);


private:
    //getters
    string getName()const;
    string getAge()const;
    string getOverall()const;
    string getNationality()const;
    string getClub()const;

};

#endif //BINARYINSERTIONSORT_YOURCLASS_H
