#include <iostream>
using namespace std;

#define DEBUGMODE

int totalLength = 0; 

void print(int *arr, int n) {
    for (int i = 0; i < n; i++)
        cout << "[" << arr[i] << "] ";
    cout << endl;
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

int main() {
    int num;
    cin >> num;
    totalLength = num;

    int *arr = new int[num];
    for (int i = 0; i < num; i++) cin >> arr[i];

    print(arr, num);  
    quickSort(arr, 0, num - 1);

    delete[] arr;
    return 0;
}
