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


//slides
void LinkedList:: append(YourClass obj) {
    if (head == nullptr) {
        head = new Node(obj);
    } else {
        Node* cursor = head;
        while (cursor -> next != nullptr) {
            cursor = cursor -> next;
        }
        cursor -> next = new Node(obj);
    }
}

//slides
void LinkedList:: printList() {
    node * cursor = head;
    if (! cursor) {
        cout << " empty list " << endl;
    } else {
        while (cursor != nullptr) {
            cout << cursor -> value << endl;
            cursor = cursor -> next;
        }
    }
}