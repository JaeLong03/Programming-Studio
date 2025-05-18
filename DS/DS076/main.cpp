#include <iostream>
using namespace std;

#define DEBUGMODE
int totalLength = 0; 

void print(int *arr, int n) {
    for (int i = 0; i < n; i++)
        cout << "[" << arr[i] << "] ";
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

void bubbleSort(int *arr, int n){
    for(int i = n-1; i > 0; i--){ 
        for(int j = 0; j < i; j++){ 
            if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]); 
        }
    #ifdef DEBUGMODE
        print(arr, n);
    #endif
    }
}

int partition(int arr[], int p, int r) {
    int pivot = arr[r];
    int low = p;
    int high = r - 1;

    while (low <= high) {
        while (low <= high && arr[low] < pivot) low++;
        while (low <= high && arr[high] > pivot) high--;

        if (low <= high) {
            swap(arr[low], arr[high]);
            low++;
            high--;
        }
    }

    swap(arr[low], arr[r]);
    return low;
}

void quickSort(int *arr, int left, int right) {
    if (left < right) {
        int pivotIndex = partition(arr, left, right);

        #ifdef DEBUGMODE
        print(arr, totalLength);  
        #endif

        quickSort(arr, left, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, right);
    }
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
    int choice;

    while(1){ 
        cout << "1.selection 2.insertion 3.bubble 4.quick 5.merge 6.exit > "; 
        cin >> choice; 

        if (choice == 6) break; 
        int num;
        cout << "Enter count: "; 
        cin >> num;
        totalLength = num;

        cout << "Enter numbers: ";
        int *arr = new int[num];
        for (int i = 0; i < num; i++) cin >> arr[i];
        
        switch(choice){ 
            case 1: cout << "==== selection sort ====" << endl; 
            print(arr, num);
            selectionSort(arr, num);
            break; 
            case 2: cout << "==== insertion sort ====" << endl; 
            print(arr, num);
            insertionSort(arr, num);
            break; 
            case 3: cout << "==== bubble sort ====" << endl; 
            print(arr, num);
            bubbleSort(arr, num);
            break; 
            case 4: cout << "==== quick sort ====" << endl; 
            print(arr, num);
            quickSort(arr, 0, num - 1);
            break; 
            case 5: 
            cout << "==== merge sort ====" << endl; 
            print(arr, num);
            mergeSort(arr, 0, num-1, num);
            break; 
            case 6: 
            break; 
        }


    }
    return 0;
}
