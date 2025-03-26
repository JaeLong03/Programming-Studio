#include <iostream> 
#include <string> 
using namespace std; 

void ltrim(string &s); 
void rtrim(string &s); 

int main(){ 
    string str; 
    getline(cin, str); 

    ltrim(str); 
    rtrim(str); 

    cout << str << endl;

    return 0; 
}

void ltrim(string &s){ 
    int last; 

    last = s.find_first_not_of("\t "); 
    s.erase(0, last); 
}

void rtrim(string &s){ 
    int last; 

    last = s.find_last_not_of("\t "); 
    s.erase(last+1, s.size()); 
}
