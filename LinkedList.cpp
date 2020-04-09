//
// Created by Austin Grover and James Cook on 4/7/20.
//


#include "LinkedList.h"
#include <iostream>
#include "YourClass.h"
using namespace std;

//constructor
LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::LinkedList(const LinkedList &players){
   // cout << "Copy Constructor Called! " << endl;
    Node *current = players.head;
    if(current != nullptr){
        head = new Node(current->value, nullptr);
    }
    Node *tmp = head;
    while(current->next!= nullptr){
        current = tmp->next;
        tmp->next = new Node(current-> value, nullptr);
    }
}

//Assignment Operator
LinkedList &LinkedList::operator=(const LinkedList &right) {
   // cout << "Assign Operator Called!" << endl;
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

bool LinkedList::Delete(YourClass obj) {

}

YourClass LinkedList::find(YourClass obj) {

}

//slides
void LinkedList:: append(YourClass obj) {
    if (head == nullptr) {
        head = new Node(obj);
    } else {
        Node* current = head;
        while (current -> next != nullptr) {
            current = current -> next;
        }
        current -> next = new Node(obj);
    }
}

void LinkedList:: printList() {
    Node * current = head;
    if (! current) {
        cout << " empty list " << endl;
    } else {
        while (current != nullptr) {
            cout << current -> value << endl;
            current = current -> next;
        }
    }
}

void LinkedList::InsertionSort() {
    Node *current = head;
    Node *previous;
    current = current->next;
    while(current != nullptr){
        previous = head;


        while(previous != current){
            if(previous->value > current->value){
                swap(previous->value, current->value);
            }else{
                previous = previous->next;
            }
        }
        current= current->next;
    }

}

