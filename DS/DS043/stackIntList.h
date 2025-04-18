#include <iostream>
using namespace std;

class Node{
public:
    char data;
    Node* next;
    void setNode(int num); 
};

class MyStackIntList {
private: 
    int size;       // size of the stack
    Node* top;      // top element

public:
    int getSize(); 
    MyStackIntList();    // constructor to make the stack 
    ~MyStackIntList();   // Destructor to remove from memory 
    void push(char s);   // push function for inserting an element at the top of stack
    char pop();          // pop function for deleting the topmost element
    int isFull();       // check either the stack is full or not
    int isEmpty();      // check either stack is empty or not
    void display();     // function for displaying the stack 
    int stackTop();     // top function for checking the topmost element present in the stack 
    void clear(); 
};