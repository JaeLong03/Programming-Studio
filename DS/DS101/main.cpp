#include <iostream>
#include "sort.h"  

using namespace std;

int main(){ 
    int num; 
    cin >> num; 
    int *arr = new int[num];

    for(int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    descenBubbleSort(arr, num);  

    for(int i = 0; i < num; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
    
    delete[] arr;
    return 0; 
}
