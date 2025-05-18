#include <iostream>
using namespace std;
#define DEBUGMODE 

void print(int *arr, int n){
    for(int i = 0; i < n ; i++)
        cout << "[" << arr[i] << "] " ;
    cout << endl;
}

void selectionSort(int *arr, int n){
    int min_i = 0;

    for(int i = 0; i < n-1; i++){
        min_i = i;
        for(int j = i+1; j < n; j++){
            if(arr[min_i] > arr[j]) min_i = j;
        }
        if(i != min_i) swap(arr[i], arr[min_i]);
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
    selectionSort(arr, num);
    cout << "====================" <<endl;
    print(arr, 5);
    return 0;
}