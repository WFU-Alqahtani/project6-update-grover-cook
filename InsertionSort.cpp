#include <iostream>
#include <vector>
#include <cassert>
#include <fstream>
#include "BinaryInsertionSort.h"
#include "Node.h"
#include "YourClass.h"
#include "LinkedList.h"
#include "LinkedList.cpp"

using namespace std;

int main() {
    string playerName, playerAge, playerNationality, playerClub, playerOverall;
    YourClass nextPlayer;

    string filename;
    int totalEntries = 0;
   //read the file name of your dataset

//   cout << "What is the name of your file?" << endl;
//   cin >> filename;

   cout << "What many data entries are there?" << endl;
   cin >> totalEntries;

   ifstream inFile;
   ofstream outFile;
   inFile.open("Project6Data.csv");

    if (! inFile . is_open ()){
        cout << " Could not open file \n";
        return 1; // something bad happened , return non ‐ zero
    }

    vector<YourClass> v(totalEntries);

    for(int i=0; i<totalEntries; i++) {
        getline(inFile, playerName, ',');
        nextPlayer.setName(playerName);
        getline(inFile, playerAge, ',');
        nextPlayer.setAge(playerAge);
        getline(inFile, playerNationality, ',');
        nextPlayer.setNationality(playerNationality);
        getline(inFile, playerClub, ',');
        nextPlayer.setClub(playerClub);
        getline(inFile, playerOverall);
        nextPlayer.setOverall(playerOverall);
        v.at(i) = nextPlayer;
        cout<<nextPlayer<<endl;
    }



//    LinkedList l;
//    // populate the vector with the data from your data set
//    string tmp;
//    getline(inFile, tmp);
//    while (!inFile.eof()) {
//        if (!inFile.fail()) {
//            getline(inFile, playerName, ',');
//            getline(inFile, playerAge, ',');
//            getline(inFile, playerOverall, ',');
//            getline(inFile, playerNationality, ',');
//            getline(inFile, playerClub, ',');
//            getline(inFile, tmp);
//            YourClass a(playerName, playerAge, playerOverall, playerName, playerClub);
//
//        }
//    }
//    l.printList();





    // binary insertion sort
    insertionSort(v, v.size());

    // check if sorted
    for (int i = 1; i < v.size(); i++) {
        assert(v[i-1] <= v[i]);
    }

    // print out sorted list
    for (int i = 0; i < v.size(); i++) {
        //you should ovrride << to YourClass
        cout << v.at(i) << endl;
    }

    // FINISH ME

}