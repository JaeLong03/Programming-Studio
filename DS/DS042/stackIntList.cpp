#include "stackIntList.h"
#include <iostream>
using namespace std;

int MyStackIntList:: getSize(){ 
    return size; 
}

MyStackIntList::MyStackIntList() { 
    top = nullptr;
    size = 0;
}

MyStackIntList::~MyStackIntList() {
    Node* p = top;
    while (top) {
        delete p;
        top = top->next;
        p = top;
    }
}

void MyStackIntList::push(int x) {
    Node* p = new Node;
    if (p == nullptr) {
        cout << "Stack Overflow!" << endl;
    }
    else {
        p->data = x;
        p->next = top;
        top = p;
        size++;
    }
}

int MyStackIntList::pop() { 
    Node* p = top;
    int x = -1;
    if (p == nullptr) {
        cout << "Stack Underflow!" << endl;
    }
    else {
        x = p->data;
        top = top->next;
        delete p;
        size--;
    }
    return x;
}

int MyStackIntList::isFull() { 
    Node* p = new Node;
    int r = p ? 0 : 1;
    delete p;
    return r;
}

int MyStackIntList::isEmpty() {
    return top ? 0 : 1;
}

void MyStackIntList::display() { 
    Node* p = top;
    if (p == NULL){ 
        cout << "Stack is empty" << endl; 
        return;
    }
    while(p) {
        if(p->next == NULL)
            cout << p->data; 
        else
            cout << p->data << " -> ";
        p = p->next;
    }
    cout << " ("<< size << ") nodes" << endl;
}

int MyStackIntList::stackTop() {
    if (top)
        return top->data;
    else
        return -1;
}

void MyStackIntList:: clear(){ 
    Node* p = top;
    if(p == nullptr){ 
        cout << "Stack is already empty" << endl;
        return; 
    }
    while(p != NULL){ 
        Node *temp = p; 
        p = p->next; 
        delete temp;
    }
    top = nullptr; 
    size = 0; 
}