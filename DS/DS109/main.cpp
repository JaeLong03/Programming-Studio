#include <iostream>
#include <stack>
using namespace std; 

class Solution {
public:
    string removeDuplicates(string s) {
        string result = ""; 
        stack <char> a,b; 
        for(int i = 0; i < s.length(); i++){ 
            a.push(s[i]); 
            while(a.size() >= 2){ 
                char temp = a.top(); 
                a.pop(); 
                if(a.top() == temp) a.pop(); 
                else a.push(temp); 
                break; 
            }
        }

        while(!a.empty()){ 
            b.push(a.top()); 
            a.pop();
        }
        while(!b.empty()){ 
            result += b.top(); 
            b.pop(); 
        }
        
        return result; 
    }
};

int main(){ 
    string in; 
    cin >> in; 

    Solution a; 
    cout << a.removeDuplicates(in) << endl; 
    return 0; 
}