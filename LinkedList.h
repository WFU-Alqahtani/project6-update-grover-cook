//
// Created by sarra on 3/30/2020.
//

#ifndef BINARYINSERTIONSORT_LINKEDLIST_H
#define BINARYINSERTIONSORT_LINKEDLIST_H

#include "Node.h"
#include <iostream>
using namespace std;

class LinkedList{

public:
    //Constructors
    LinkedList();
    LinkedList(const LinkedList & list);

    //Assignment Operator
    LinkedList &operator=(const LinkedList & rhs);

    //Destructor
    ~LinkedList();

    //Functions. You may not need to use them all
    //Copied from slides: append and printList
    void append(YourClass obj);
    bool Delete (YourClass obj);    //Slides have a remove, not sure if remove is necessary but I remember we need to de-link the node somehow
    YourClass find (YourClass obj)  //Need to set up operator to go until first node with a greater value?
    void printList();
    void InsertionSort();

private:
    Node* head;

};

#endif //BINARYINSERTIONSORT_LINKEDLIST_H