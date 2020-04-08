#include <iostream>
#include <vector>
#include <cassert>
#include <fstream>
#include "BinaryInsertionSort.h"
#include "Node.h"
#include "YourClass.h"

using namespace std;

int main() {

    string filename;
    int totalEntries = 0;
   //read the file name of your dataset

   cout << "What is the name of your file?" << endl;
   cin >> filename;

   cout << "What many data entries are there?" << endl;
   cin >> totalEntries;

   ifstream inFile;
   ofstream outFile;
   inFile.open(filename);

    if (! inFile . is_open ()){
        cout << " Could not open file \n";
        return 1; // something bad happened , return non ‐ zero
    }


    vector<YourClass> v;
    string nextRow;
    YourClass temp; //initialize a temporary var to store the read data into
    while(!inFile.eof()){ //read until end of file
        getline(inFile, nextRow, ',');
        v.push_back(temp);
    }
    inFile.close();
    cout << "done!" << endl;
    // populate the vector with the data from your data set
    string data;
    for (int i = 0; i < totalEntries; ++i) {
        getline(inFile, data);
        v.at(i)=

    }

    // binary insertion sort
    insertionSort(v, v.size());

    // check if sorted
    for (int i = 1; i < v.size(); i++) {
        assert(v[i-1] <= v[i]);
    }

    // print out sorted list
    for (int i = 0; i < v.size(); i++) {
        //you should ovrride << to YourClass
        YourClass << v[i] << endl;
    }

    // FINISH ME

}