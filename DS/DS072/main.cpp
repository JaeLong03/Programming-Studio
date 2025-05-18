#include <iostream>
using namespace std;
#define DEBUGMODE 

void print(int *arr, int n){
    for(int i = 0; i < n ; i++)
        cout << "[" << arr[i] << "] " ;
    cout << endl;
}

void insertionSort(int *arr, int n){
    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i-1; 
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    #ifdef DEBUGMODE
        print(arr, n);
    #endif
    }
}

int main(){
    int num; 
    cin >> num; 
    int *arr = new int[num];
    for(int i = 0; i < num; i++) cin >> arr[i]; 
    print(arr, num);
    insertionSort(arr, num);
    cout << "====================" <<endl;
    print(arr, 5);
    return 0;
}