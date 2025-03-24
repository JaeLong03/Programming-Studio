#include <iostream> 
#include <cstring>
#include <cctype> 
using namespace std; 

int main() {
    char str[50]; 
    fgets(str, 50, stdin); 

    int letterCount[26] = {0};
    int blankCount = 0;

    for (int i = 0; i < strlen(str); i++) {
        char ch = str[i];
        if (ch == ' ') {
            blankCount++; 
        } else if (isalpha(ch)) { 
            char upperChar = toupper(ch);
            letterCount[upperChar - 'A']++; 
        }
    }

    printf("blanks : %d\n", blankCount);
    for (int i = 0; i < 26; i++) {
        if (letterCount[i] > 0) {
            printf("%c : %d\n", 'A' + i, letterCount[i]);
        }
    }

    return 0;
}