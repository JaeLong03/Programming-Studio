#include "stackInt.h"
#include <iostream>
using namespace std; 

int main(){ 
    int size; 
    string input; 

    cin >> size; 
    CouponStack *a = new CouponStack(size); 
    cin.ignore(); 

    while(true){
        getline(cin, input); 
        struct Coupon *s; 
        s = new Coupon; 
        switch(input[0]){ 
            case '+': 
                s->rank = stoi(input.substr(2,1)); 
                s->name = input.substr(4, input.size()-4); 
                a->push(*s); 
                break; 
            case '-': 
                s = a->pop(); 
                cout << s->rank << "등 - " << s -> name << endl; 
                break; 
            case 'q': 
                return 0; 
                break; 
            default: 
                break; 
        }
    }

    return 0; 
}