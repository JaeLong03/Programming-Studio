#include "queueIntList.h"
#include <iostream>
using namespace std;

MyQueueIntList::MyQueueIntList() { 
	front = rear = nullptr; 
    size = 0;
}

MyQueueIntList::~MyQueueIntList() {
    Node* p = front;
    while (front) {
        front = front->next;
        delete p;
        p = front;
    }
}

void MyQueueIntList::enqueue(int x) {
    Node* p = new Node;
    p->data = x;
    p->next = nullptr;
    if (isFull()) { 
        cout << "Queue is Overflow!" << endl; 
    }
    if (isEmpty()){
        front = p;
    }
    else{
        rear->next = p;
    }
    rear = p;
    size++;
}

int MyQueueIntList::dequeue() { 
    Node* p;
    int x = -1; // initially setting x as -1 
    if (isEmpty()) { 
		cout << "Queue is Empty!" << endl;
    }
	else
	{
		p = front;
		front = p->next;
        x = p->data;
        delete p;
        size--;
	}
	return x; // return the deleted value 
}

int MyQueueIntList::isFull() { 
    Node* p = new Node;
    int r = p ? 0 : 1;
    delete p;
    return r;
}

int MyQueueIntList::isEmpty() {
    if (front == nullptr) {
        return 1;
    }
    return 0;
}

void MyQueueIntList::display() { 
    Node* p = front;
    while(p) {
        cout << p->data; 
        p = p->next;
        if(p != NULL) cout << " -> "; 
    }
    cout << endl;
}

void MyQueueIntList:: showfront(){ 
    cout << "element at front " << front -> data << endl; 
}

void MyQueueIntList:: showrear(){ 
    cout << "element at rear " << rear -> data << endl; 
}
