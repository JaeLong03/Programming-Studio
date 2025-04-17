#include "stackIntList.h"
#include <iostream> 
using namespace std; 

int main(){ 
    string input = ""; 
    MyStackIntList *a = new MyStackIntList(); 
    
    while(input != "q"){ 
        getline(cin, input); 
        
        if(input.substr(0,4) == "push")
            a -> push(stoi(input.substr(5))); 
        else if(input == "pop")
            a -> pop(); 
        else if(input == "top")
            cout << a->stackTop() << endl; 
        else if(input == "print")
            a -> display(); 
        else if (input == "clear")
            a-> clear(); 
        else if (input == "q")
            cout << "Bye!" << endl;
    }

    return 0; 
}
