#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const string &a, const string &b) {
    if (a.length() == b.length())
        return a < b; 
    return a.length() < b.length(); 
}

int main() {
    int n;
    cin >> n;

    vector<string> words;
    string temp;

    for (int i = 0; i < n; ++i) {
        cin >> temp;

        if (find(words.begin(), words.end(), temp) == words.end()) {
            words.push_back(temp);
        }
    }

    sort(words.begin(), words.end(), compare);
    
    cout << endl << "===============================" <<endl;
    for (int i = 0; i < words.size(); i++) {
        cout << words[i] << endl;
    }

    return 0;
}
