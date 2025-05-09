#include "queueInt.h"
#include <iostream>
using namespace std;

MyQueueInt::MyQueueInt(int size) { 
	front = rear = -1;
	this->size = size;		
	Q = new int[size];					//Memory is allocated for the Queue in the HEAP
}

MyQueueInt::~MyQueueInt() {
    delete[] Q; // free the memory 
}

void MyQueueInt::enqueue(int x) {
    if (isFull()) { 
        cout << "Queue is Overflow!" << endl; 
    }
    else {  
		rear = (rear+1) % size;  // increament the rear and then insert the value in the queue
		Q[rear] = x; // insertion of the element.
    }
}

int MyQueueInt::dequeue() { 
    int x = -1; // initially setting x as -1 
    if (isEmpty()) { 
		cout << "Queue is Empty!" << endl;
    }
	else
	{
		front = (front + 1) % size; // increment the front and take out the element 
		x = Q[front];
	}
	return x; // return the deleted value 
}

int MyQueueInt::isFull() { 
    if ((rear + 1) % size == front) { 
        return 1;
    }
    return 0;
}

int MyQueueInt::isEmpty() {
    if (front == rear) {
        return 1;
    }
    return 0;
}

void MyQueueInt::display() { 
    cout << "Queue ("<< size << ") : ";
    for (int i = front + 1; i <= rear; i++) {
        cout << Q[i] << " | ";
    }
    cout << endl;
}

int MyQueueInt:: sizeQ() const{ 
    return (rear - front + size) % size;
}

void MyQueueInt:: printDetail() const{ 
    cout << "Size : " << sizeQ() << endl;
    cout << "Queue : ";
    int i = (front + 1) % size;
    while (i != (rear + 1) % size) {
        cout << "[" << Q[i] << "]";
        i = (i + 1) % size;
    }
    cout << endl;
    
    cout << "Index : "; 
    i = (front + 1) % size;
    while (i != (rear + 1) % size) {
        cout << i << " ";
        i = (i + 1) % size;
    }
    cout << endl;
}

