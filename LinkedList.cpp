//
// Created by sarra on 3/30/2020.
//

#include "LinkedList.h"
#include <iostream>
#include "YourClass.h"
using namespace std;

LinkList::LinkList() {
    head = nullptr;
}

LinkedList::LinkedList(const LinkedList &players){
    cout << "Copy Constructor Called! " << endl;
    Node *current = players.head;
    if(current != nullptr){
        head = new Node(listCursor->value, nullptr);
    }
    Node *tmp = head;
    while(current->next!= nullptr){
        current = tmp->next;
        tmp->next = new Node(current-> value, nullptr);
    }
}

//Assignment Operator
LinkedList &LinkedList::operator=(const LinkedList &right) {
    cout << "Assign Operator Called!" << endl;
    LinkedList tmp(right);
    swap(*this, tmp);
    return *this;
}

//Destructor

LinkedList::~LinkedList() {
    Node *tmp;
    Node *current = head;
    while (current != nullptr) {
        tmp = current->next;
        current->next = nullptr;
        delete current;
        current = tmp;
    }
}

