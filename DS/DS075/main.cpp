#include <iostream>
using namespace std;

#define DEBUGMODE

void print(int *arr, int n) {
    for (int i = 0; i < n; i++)
        cout << "[" << arr[i] << "] ";
    cout << endl;
}

void merge(int list[], int left, int mid, int right){
    int *sorted = new int[right + 1];
    int i = left, j = mid + 1, k = left;

    while(i <= mid && j <= right){
        if(list[i] <= list[j])
            sorted[k++] = list[i++];
        else
            sorted[k++] = list[j++];
    }

    while(i <= mid)
        sorted[k++] = list[i++];
    while(j <= right)
        sorted[k++] = list[j++];

    for(int l = left; l <= right; l++)
        list[l] = sorted[l];

    delete[] sorted;
}

void mergeSort(int *arr, int left, int right, int size) {
    int mid;

    if(left<right){
        mid = (left+right)/2;
        mergeSort(arr, left, mid, size); 
        mergeSort(arr, mid+1, right, size);
        merge(arr, left, mid, right); 
        #ifdef DEBUGMODE
        print(arr, size);  
        #endif
    }
}

int main() {
    int num;
    cin >> num;

    int *arr = new int[num];
    for (int i = 0; i < num; i++) cin >> arr[i];

    print(arr, num);  
    mergeSort(arr, 0, num-1, num);

    delete[] arr;
    return 0;
}
