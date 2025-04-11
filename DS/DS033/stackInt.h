#include <iostream>
using namespace std;

struct Coupon{ 
    int rank; 
    string name;
}; 

class CouponStack {
private: 
    int size; 
    int top;    
    struct Coupon *S;     
public:
    void initialize(); 
    CouponStack(int size);   
    ~CouponStack();    
    void push(struct Coupon &x);   
    struct Coupon* pop();        
    bool isFull();   
    bool isEmpty();   
    void print(); 
    void rprint();    
};