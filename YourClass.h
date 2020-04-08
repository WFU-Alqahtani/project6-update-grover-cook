//
// Created by Austin Grover on 4/7/20.
//
#ifndef BINARYINSERTIONSORT_YOURCLASS_H
#define BINARYINSERTIONSORT_YOURCLASS_H

#include <iostream>
using namespace std;

class YourClass{
public:
    //age and overall might need to switch to int, still working on that
    //Might want a default constructor in the meantime bc only name is being set currently
    string name;
    string age;
    string overall;
    string nationality;
    string club;
    friend ostream &operator<<( ostream &output, const YourClass &example );
    friend ostream &operator>>( ostream &output, const YourClass &example );
    bool operator>(const YourClass& example);


    //Made these public so they could be used in InsertionSort.cpp and added parameters
    //Also made the getters return their respected variable, although some parameters are currently ints that might need to be strings
    void setName(string playerName);
    void setAge(int playerAge);
    void setOverall(int playerOverall);
    void setNationality(string playerNationality);
    void setClub(string playerClub);


private:
    //Can delete these setters if you like what I did with the other setters
    string getName()const;
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
