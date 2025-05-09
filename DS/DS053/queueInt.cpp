#include "queueInt.h"
#include <iostream>
using namespace std;

MyQueueInt::MyQueueInt(int size) { 
	front = rear = -1;
	this->size = size;		
	Q = new Student[size];					//Memory is allocated for the Queue in the HEAP
}

MyQueueInt::~MyQueueInt() {
    delete[] Q; // free the memory 
}

Student MyQueueInt:: getFront(){ 
    return Q[front+1]; 
}

Student MyQueueInt:: getRear(){ 
    return Q[rear]; 
}

void  MyQueueInt:: getName(double n){ 
    int i = (front + 1) % size;
    while (i != (rear + 1) % size) {
        if(Q[i].grade == n){ 
            cout << n << " " << Q[i].name << endl; 
        }
        i = (i + 1) % size;
    }
}

void MyQueueInt::enqueue(Student x) {
    if (isFull()) { 
        cout << "Queue is Overflow!" << endl; 
    }
    else {  
		rear = (rear+1) % size;  // increament the rear and then insert the value in the queue
		Q[rear] = x; // insertion of the element.
    }
}

Student MyQueueInt::dequeue() { 
    Student *x; // initially setting x as -1 
    if (isEmpty()) { 
		cout << "Queue is Empty!" << endl;
    }
	else
	{
		front = (front + 1) % size; // increment the front and take out the element 
		x = &Q[front];
	}
	return (*x); // return the deleted value 
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
    cout << "Queue : ";
    int i = (front + 1) % size;
    while (i != (rear + 1) % size) {
        cout << "[" << Q[i].grade << "]";
        i = (i + 1) % size;
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
        cout << "[" << Q[i].grade << "]";
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

void Student:: setData(double a, string b){ 
    grade = a; 
    name = b; 
}

