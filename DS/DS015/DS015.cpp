#include <iostream> 
#include <string> 
using namespace std; 

void ltrim(string &s); 
void rtrim(string &s); 
string last_Word(string &s); 

int main(){ 
    string str; 
    string lastWord;
    int size; 
    getline(cin, str); 

    ltrim(str); 
    rtrim(str); 

    cout << str << endl;
    lastWord = last_Word(str);
    size = lastWord.size(); 
    cout << size << endl; 

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

string last_Word(string &s){ 
    int first, last; 
    string temp; 

    last = s.find_last_not_of(" ");
    first = s.find_last_of(" ", last); 
    for(int i = first+1; i < s.size(); i++){
        temp += s[i]; 
    }

    return temp; 
}