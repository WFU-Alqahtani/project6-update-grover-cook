//
// Created by Austin Grover and James Cook on 4/7/20.
//


#include <iostream>
#include <vector>
#include <cassert>
#include <fstream>
#include "BinaryInsertionSort.h"
#include "Node.h"
#include "YourClass.h"
#include "LinkedList.h"
#include "LinkedList.cpp"
#include <ctime>

using namespace std;

int main() {
    string playerName, playerAge, playerNationality, playerClub, playerOverall;
    YourClass nextPlayer;

    string filename;
    int totalEntries = 0;
   //read the file name of your dataset

//   cout << "What is the name of your file?" << endl;
//   cin >> filename;

   cout << "How many data entries would you like to sort?" << endl;
   cout << "The maximum number for this data set is 18,279." << endl;
   cin >> totalEntries;

   ifstream inFile;
   ofstream outFile;
   inFile.open("Project6Data.csv");

    if (! inFile . is_open ()){
        cout << " Could not open file \n";
        return 1; // something bad happened , return non ‐ zero
    }

    vector<YourClass> v(totalEntries);
    LinkedList players;

    //fill the object with each data point
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
        players.append(nextPlayer);

    }

    //run and time insertion sort using a linked list
    clock_t start_LinkedList = clock();
    players.InsertionSort();
    clock_t end_LinkedList = clock();

    //print sorted linked list
    players.printList();

    //run adn time insertion sort using vector
    clock_t start_InsertionSort = clock();
    // binary insertion sort
    insertionSort(v, v.size());
    clock_t end_InsertionSort = clock();


    // check if sorted
    for (int i = 1; i < v.size(); i++) {
        assert(v[i-1] <= v[i]);
    }

    // print out sorted list
    for (int i = 0; i < v.size(); i++) {
        //you should override << to YourClass
        cout << v.at(i) << endl;
    }

    double elapsed_LinkedList = double(end_LinkedList - start_LinkedList) / CLOCKS_PER_SEC;
    double elapsed_InsertionSort = double(end_InsertionSort - start_InsertionSort) / CLOCKS_PER_SEC;

    cout << "Time to complete (s): " << endl;
    cout << "Linked List: " << elapsed_LinkedList << " Insertion Sort: " << elapsed_InsertionSort << endl;


    inFile.close();

}