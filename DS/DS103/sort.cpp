#include "sort.h"
#include <iostream>
using namespace std;

void print(int *arr, int n){
    for(int i = 0; i < n ; i++)
        cout << "[" << arr[i] << "] ";
    cout << endl;
}

void ascenBubbleSort(int *arr, int n){
    for(int i = n-1; i > 0; i--){ 
        for(int j = 0; j < i; j++){ 
            if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]); 
        }
    }
}

void descenBubbleSort(int *arr, int n){
    for(int i = n-1; i > 0; i--){ 
        for(int j = 0; j < i; j++){ 
            if(arr[j] < arr[j+1]) swap(arr[j], arr[j+1]); 
        }
    }
}
