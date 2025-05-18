#include <iostream>
using namespace std;
#define DEBUGMODE 

void print(int *arr, int n){
    for(int i = 0; i < n ; i++)
        cout << "[" << arr[i] << "] " ;
    cout << endl;
}

void ascenBubbleSort(int *arr, int n){
    for(int i = n-1; i > 0; i--){ 
        for(int j = 0; j < i; j++){ 
            if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]); 
        }
    #ifdef DEBUGMODE
        print(arr, n);
    #endif
    }
}

void descenBubbleSort(int *arr, int n){
    for(int i = n-1; i > 0; i--){ 
        for(int j = 0; j < i; j++){ 
            if(arr[j] < arr[j+1]) swap(arr[j], arr[j+1]); 
        }
    #ifdef DEBUGMODE
        print(arr, n);
    #endif
    }
}

int main(){
    int num; 
    cin >> num; 
    int *arr = new int[num];
    int *arr2 = new int[num]; 
    for(int i = 0; i < num; i++) cin >> arr[i]; 
    copy(arr, arr+num, arr2); 
    cout << "=== ascending order ===" <<endl;
    print(arr, num);
    ascenBubbleSort(arr, num);
    cout << "=== descending order ===" <<endl;
    print(arr2, num);
    descenBubbleSort(arr2, num); 
    return 0;
}