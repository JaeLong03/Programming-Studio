#include "queueInt.h"
#include <iostream>
using namespace std;

int main() {
    MyQueueInt myQueue(10);

    cout << "===== Dequeue x 1 ======" << endl; 
    myQueue.dequeue(); 
    myQueue.printDetail(); 

    for(int i = 1; i <= 7; i ++) myQueue.enqueue(i*10); 
    cout << "===== Enqueue x 7 (10 ~ 70) =====" << endl; 
    myQueue.printDetail(); 


    for(int i = 1; i <= 3; i ++) myQueue.dequeue(); 
    cout << "===== Dequeue x 3 ======" << endl; 
    myQueue.printDetail();

    cout << "===== Enqueue x 6 (10 ~ 60) =====" << endl; 
    for(int i = 1; i <= 6; i ++) myQueue.enqueue(i*10); 
    myQueue.printDetail(); 

    return 0;
}