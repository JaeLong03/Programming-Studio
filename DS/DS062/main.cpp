#include <iostream>
#include "queueIntList.h"
using namespace std; 

string getOrdinal(int n) {
        if (n % 100 >= 11 && n % 100 <= 13) return to_string(n) + "th";
        switch (n % 10) {
            case 1: return to_string(n) + "st";
            case 2: return to_string(n) + "nd";
            case 3: return to_string(n) + "rd";
            default: return to_string(n) + "th";
        }
}

int main()
{
    MyQueueIntList *a = new MyQueueIntList(); 
    int num, cnt = 1; 
    cin >>num; 

    while (cnt <= num) {
        if (cnt == 1 || cnt == 2) {
            a->enqueue(1);
            cout << getOrdinal(cnt) << " : ";
            if (cnt == 1) a->showfront(); 
            else a->showrear();
        } else {
            a->enqueue(a->getFront() + a->getRear());
            cout << getOrdinal(cnt) << " : ";
            a->showrear();
            a->dequeue();
        }
        cnt++;
    }

    return 0;
}