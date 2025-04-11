#include "stackInt.h"
#include <iostream>
using namespace std;
#define MAX 100

MyStackInt::MyStackInt() { 
    name = new string[MAX]; 
    gpa = 0.0; 
    top = -1; // intially set top of the Stack as -1;
}

MyStackInt::~MyStackInt() {
    delete[] name; // free the memory 
}

double MyStackInt:: getGpa(){ 
    return gpa; 
}

void MyStackInt:: setGpa(double num){ 
    gpa = num; 
}

void MyStackInt:: push(string s) {
    if (isFull()) { 
        cout << "Stack Overflow!" << endl; 
    }
    else {  
        top++; // increment top 
        name[top] = s; // and push the element to Stack 
    }
}

string* MyStackInt::pop() { 
    string *x = name;  
    if (isEmpty()) { 
        cout << "Stack Underflow!" << endl; 
    }
    else {
        x = &name[top]; // take out the element 
        top--; // and decreament the size of the Stack 
    }
    return x;
}

bool MyStackInt::isFull() { 
    if (top == size - 1) { 
        return true;
    }
    return false;
}

bool MyStackInt::isEmpty() {
    if (top == -1) {
        return true;
    }
    return false;
}

void MyStackInt::display() { 
    cout << "Top GPA: " << gpa << endl; 
    for (int i = top; i >= 0; i--) {
        cout << name[i] << endl;
    }
}

int MyStackInt::stackTop() {
    if (isEmpty()) {
        return -1;
    }
    cout << name[top]; 
    return 1;
}