#include "queueInt.h"
#include <iostream>
using namespace std;

int main() {
    string input; 
    int size; 
    cin >> size; 
    MyQueueInt myQueue(size);

    while(input != "q"){ 
        cin >> input; 
        
        if(input == "en"){ 
            int num ; 
            cin >> num; 
            myQueue.enqueue(num); 
        }
        else if (input == "de")
            myQueue.dequeue(); 
        else if (input == "size")
            cout << "=> " << myQueue.sizeQ() << endl; 
        else if (input == "front")
            cout << "=> " << myQueue.getFront() << endl; 
        else if(input == "rear")
            cout << "=> " << myQueue.getRear() << endl; 
        else if(input == "empty"){ 
            if(myQueue.isEmpty()) cout << "=> " << 1 << endl; 
            else cout << "=> " << 0 << endl; 
        }
        else if(input == "print")
            myQueue.display(); 
        else if (input == "q"){
            cout << "bye!" << endl;
            break;
        }
        else 
            cout << "wrong input" << endl; 
    }

    return 0;
}