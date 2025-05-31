#include <iostream>
#include <stack>
using namespace std; 

int main(){
    string input = ""; 

    stack <char> left; 
    stack <char> right; 

    while(input != "q"){ 
        cin >> input; 
        if(input == "q")
            break; 
        for(int i = 0; i < input.size(); i++){ 
            if(input[i] != '<' && input[i] != '>'){ 
                left.push(input[i]);
            }
            else if(input [i] == '<' && !left.empty()){ 
                right.push(left.top()); 
                left.pop(); 
            }
            else if(input[i] == '>' && !right.empty()){ 
                left.push(right.top()); 
                right.pop(); 
            }
        }

        while(!(left.empty())){ 
            right.push(left.top());
            left.pop(); 
        }

        while(!right.empty()){ 
            cout << right.top(); 
            right.pop(); 
        }
        cout << endl; 
    }
    
    return 0; 
}