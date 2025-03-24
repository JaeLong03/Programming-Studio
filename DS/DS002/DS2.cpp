#include <iostream> 
#include <cmath>
using namespace std; 

int main(){ 
    double x1, y1; 
    double x2, y2; 
    double length; 

    cin >> x1 >> y1 >> x2 >> y2; 

    length = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2)); 

    cout << length; 

    return 0; 
} 
