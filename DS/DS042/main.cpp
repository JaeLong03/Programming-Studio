#include "stackIntList.h"
#include <iostream> 
using namespace std; 

bool is_operand(char c); 

int main(){ 
    string input = ""; 
    MyStackIntList *a = new MyStackIntList; 
    int total = 0; 
    
    while(input != "="){
        cin >> input; 
        if(input[0] == '#')
            a->push(stoi(input.substr(1))); 
        else if (!is_operand(input[0]) && input != "=") {
            cout << "=> Expression error !!!" << endl;
            return 0;
        }
        else if(is_operand(input[0])){
            if (a->getSize() < 2) {
                cout << "=> Expression error !!!" << endl;
                return 0;
            }

            int result = 0; 
            int tmp = 0; 
            switch (input[0]){ 
                case '+':  
                    result = a->pop() + a->pop();
                    a->push(result); 
                    break; 
                case '-': 
                    tmp = a->pop(); 
                    result = a->pop() - tmp; 
                    a->push(result); 
                    break; 
                case '*':
                    result = a->pop() * a->pop();
                    a->push(result); 
                    break; 
                case '/':
                    tmp = a->pop(); 
                    if(tmp == 0){ 
                        cout << "=> Division by 0" << endl;
                        return 0; 
                    }
                    result = a->pop() / tmp; 
                    a->push(result); 
                    break; 
                default:
                    break;
            }
        }
    }

    total = a->pop();
    if(!(a->isEmpty())){
        cout << "=> Too many operands !!!!" << endl; 
        return 0; 
    }
    cout << total << endl; 

    return 0; 
}

bool is_operand(char c){ 
    if(c == '+' || c == '-' ||
    c == '*' || c == '/')
        return true; 
    return false; 
}