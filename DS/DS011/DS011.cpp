#include <iostream> 
using namespace std; 

int max_Num(int *a, int size); 

int main(){

    int num; 
    cin >> num; 
    int total; 
    int max; 

    int *arr = new int[num]; 
    int i; 

    total = 0; 
    for(i = 0; i < num; i++){ 
        cin >> arr[i]; 
        total += arr[i]; 
    }

    max = max_Num(arr, num);
    cout << total << " " << max;  

    delete[] arr; 

    return 0;  
} 

int max_Num(int *a, int size){ 
    int i; 
    int max; 

    max = a[i]; 
    for(i = 1; i < size; i++){ 
        if(a[i] > max){ 
            max = a[i]; 
        }
    }

    return max; 
    
}
