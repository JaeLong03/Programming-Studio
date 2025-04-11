#include <iostream>
using namespace std;

class MyStackInt {
private: 
    int size;   // size of the Stack
    int top;    // index of top element
    double gpa; 
    string *name; 
public:
    MyStackInt();    // constructor to make the Stack with size 
    ~MyStackInt();           // Destructor to remove from memory 
    double getGpa();
    void setGpa(double num);
    void push(string s);   // push function for inserting an element at the top of Stack
    string* pop();          // pop function for deleting the topmost element
    bool isFull();       // check either the Stack is full or not
    bool isEmpty();      // check either Stack is empty or not
    void display();     // function for displaying the Stack 
    int stackTop();     // top function for checking the topmost element present in the Stack 
};