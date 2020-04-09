//
// Created by sarra on 3/30/2020.
//

#include "LinkedList.h"
#include <iostream>
#include "YourClass.h"
using namespace std;

LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::LinkedList(const LinkedList &players){
    cout << "Copy Constructor Called! " << endl;
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

//Functions

void InsertionSort();

void LinkedList::append(YourClass obj) {
    //empty list
    if(head== nullptr){
        head = new Node(obj, nullptr);
    }else{
        //populated list
        Node* current = head;
        while(current->next != nullptr){
            current = current->next;
        }
        current->next = new Node(obj, nullptr);
    }
}

bool LinkedList::Delete(YourClass obj) {
    Node *current = head;
    Node *previous;
    if(head== nullptr){
        cout<<"List is empty." << endl;
        return false;//did not delete anything
    }else{
        //element is in the list
        while(current != nullptr){
            if(current->value == obj){
                previous->next = current->next;
                current-> next = nullptr;
                //obj is deleted
                delete current;
                return true;
            }
        }
    }
    //element was not found in the list
    return false;
}

YourClass LinkedList::find(YourClass obj) {
    Node *current = head;
    while(current != nullptr){
        if(current -> value == obj){
            //obj is found
            return obj;
        }
        current = current-> next;
    }
}

void LinkedList::printList() {
    Node *current = head;
    if(current == nullptr){
        cout << "List is empty." << endl;
    }else{
        while (current != nullptr){
            cout << current->value << endl;
            current = current->next;
        }
    }
}



void LinkedList::InsertionSort() {
    Node *current = head;
    Node *previous;
    current = current->next;
    while (current != nullptr){
        previous = head;
        while(previous != current){
            if(previous->value > current->value){
                swap(previous->value, current->value);
            }else{
                previous = previous ->next;
            }
        }
        current = current -> next;
    }
}
