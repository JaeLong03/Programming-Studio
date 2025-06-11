#include <iostream> 
#include <queue> 
using namespace std; 

int main(){ 
    int num; 
    cin >> num; 
    queue <int> a; 
    for(int i = 1; i <= num; i++) a.push(i); 

    while(a.size() != 1){ 
        a.pop(); 
        a.push(a.front()); 
        a.pop(); 
    }

    cout << a.front() << endl; 
    return 0; 
}