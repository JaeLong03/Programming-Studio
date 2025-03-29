#include <iostream>
#include <string>

using namespace std;

string find_Prefix(char* str1, char* str2, char* str3) {
    string prefix = "";
    int i = 0;
    
    while (str1[i] && str2[i] && str3[i]) {
        if (str1[i] == str2[i] && str2[i] == str3[i]) {
            prefix += str1[i];
        } else {
            break;
        }
        i++;
    }
    
    if(prefix.empty()){ 
        return "?"; 
    }
    else
        return prefix; 
}

int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    
    char* str1 = &s1[0];
    char* str2 = &s2[0];
    char* str3 = &s3[0];
    
    cout << find_Prefix(str1, str2, str3) << endl;
    
    return 0;
}
