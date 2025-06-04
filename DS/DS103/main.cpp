#include <iostream>
#include "sort.h"  

using namespace std;

int main(){ 
    int num, prize; 
    cin >> num >> prize; 
    int *arr = new int[num];

    for(int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    descenBubbleSort(arr, num);  
    cout << arr[prize-1] << endl; 
    
    delete[] arr;
    return 0; 
}
