#include "stackInt.h"
#include <iostream>
using namespace std;

int main() {
    int size; 
    string input; 
    cin >>size; 

    MyStackInt *a = new MyStackInt(size); 
    cin.ignore(); 

    while(true){ 
        getline(cin, input); 
        
        if (input.substr(0,4) == "push") {
            a->push(stoi(input.substr(5)));
        } else if (input == "pop") {
            a->pop();
        } else if(input == "print") {
            if(a->isEmpty())
                cout << "Stack is empty"; 
            else
                a->display(); 
            break;
        }
    }


    return 0; 
} 
