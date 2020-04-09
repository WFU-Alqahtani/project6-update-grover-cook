//
// Created by Austin Grover and James Cook on 4/7/20.
//

#ifndef NODE_H
#define NODE_H

#include "YourClass.h"

class Node {
public:
    // Node constructor
    Node(YourClass v , Node* n = nullptr)
    {
        value = v;
        next = n;
    }

    //Destructor
    ~Node(){
        delete next;
    }
    friend class LinkedList;
private:

    YourClass value;
    Node* next;

};

#endif //NODE_H
