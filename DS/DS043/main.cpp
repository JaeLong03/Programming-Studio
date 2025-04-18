#include "stackIntList.h"
#include <iostream>
using namespace std; 

int main(){
    string input = ""; 
    MyStackIntList  *left = new MyStackIntList(); 
    MyStackIntList *right = new MyStackIntList(); 

    while(input != "q"){ 
        cin >> input; 
        if(input == "q")
            break; 
        for(int i = 0; i < input.size(); i++){ 
            if(input[i] != '<' && input[i] != '>'){ 
                left -> push(input[i]);
            }
            else if(input [i] == '<' && !left->isEmpty()){ 
                right -> push(left->pop()); 
            }
            else if(input[i] == '>' && !right->isEmpty()){ 
                left -> push(right->pop()); 
            }
        }

        while(!(left ->isEmpty())){ 
            right -> push(left->pop());
        }
        right->display(); 
        right->clear(); 
    }
    
    return 0; 
}
