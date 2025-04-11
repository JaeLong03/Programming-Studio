#include "stackInt.h"
#include <iostream>
using namespace std;


void CouponStack:: initialize(){ 
    size = 0; 
    top = -1; 
}

CouponStack:: CouponStack(int size) { 
    S= new struct Coupon[size]; // creating the size of the Stack in memory 
    this->size = size; 
    top = -1; // intially set top of the Stack as -1;
}

CouponStack::~CouponStack() {
    delete[] S; // free the memory 
}

void CouponStack::push(struct Coupon &x) {
    if (isFull()) { 
        cout << "Stack Overflow!" << endl; 
    }
    else {  
        top++; // increment top 
        S[top] = x; // and push the element to Stack 
    }
}

struct Coupon* CouponStack::pop() { 
    struct Coupon *x = S; 
    if (isEmpty()) { 
        cout << "Stack Underflow!" << endl; 
    }
    else {
        x = &S[top]; // take out the element 
        top--; // and decreament the size of the Stack 
    }
    return x;
}

bool CouponStack::isFull() { 
    if (top == size - 1) { 
        return true;
    }
    return false;
}

bool CouponStack::isEmpty() {
    if (top == -1) {
        return true;
    }
    return false;
}

void CouponStack:: print(){ 
    for (int i = top; i >= 0; i--) {
        struct Coupon *s; 
        s = new Coupon; 
        s = &S[i]; 
        cout << s->rank << "등 - " << s->name << endl; 
    }
}

void CouponStack:: rprint() { 
    for (int i = top; i >= 0; i--) {
        struct Coupon *s; 
        s = new Coupon; 
        s = &S[i]; 
        cout << s->rank << "등 - " << s->name << endl;
        delete &S[i]; 
    }
}