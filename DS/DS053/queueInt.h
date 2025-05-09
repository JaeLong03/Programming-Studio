#include <iostream>
using namespace std;

class Student{ 
    public: 
        double grade; 
        string name; 
        void setData(double a, string b); 
}; 

class MyQueueInt {
private: 
	int front;  // front is used for deletion 
	int rear;   // rear is used for insertion
	int size;   // size of the queue 
	Student* Q;     // dynamically allocated space for queue 
public:
    MyQueueInt(int size);    // constructor to make the Queue with size 
    ~MyQueueInt();           // Destructor to remove from memory 
    Student getFront(); 
    Student getRear(); 
    void getName(double n); 
    void enqueue(Student x);   // enqueue function for inserting an element at the rear of Queue
    Student dequeue();          // dequeue function for deleting an element at the front of Queue
    int isFull();       // check either the Queue is full or not
    int isEmpty();      // check either Queue is empty or not
    void display();     // function for displaying the Queue 
    int sizeQ() const; 
    void printDetail() const; 
};