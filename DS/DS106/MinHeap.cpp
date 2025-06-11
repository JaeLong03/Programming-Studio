#include "MinHeap.h"
#include <iostream>
using namespace std; 

MinHeap:: MinHeap(){ 
    int num; 
    cin >> num; 
    for(int i = 0; i < num; i++){ 
        cin >> arr[i]; 
    }
    length = num; 

    for (int i = length / 2 - 1; i >= 0; i--) {
        minHeapifyDown(i);
    }
}

MinHeap:: ~MinHeap(){ }

void MinHeap:: insertKey(int value){ 
    if (length == 30)
    {
        cout << "Overflow: Could not insertKey";
        return;
    }

    int k = length; 

    while(k != 0 && value > arr[k/2]){ 
        arr[k] = arr[k/2]; 
        k = k/2; 
    }

    arr[k] = value; 
    length++; 

    minHeapifyUp(k);
}

int MinHeap:: deleteKey(){ 
    if (isEmpty()) {
        cout << "Could not deleteKey" << endl;
        return -1;
    }

    int min = arr[0];
    arr[0] = arr[length - 1];
    length--;
    minHeapifyDown(0);
    return min; 
}

int MinHeap::peek(){ 
    return arr[0]; 
}

int MinHeap:: size(){ 
    return length; 
}

bool MinHeap:: isEmpty(){ 
    return length == 0; 
}

void MinHeap::minHeapifyDown(int root) {
    int left = 2 * root + 1;
    int right = 2 * root + 2;
    int smallest = root;

    if (left < length && arr[left] < arr[smallest])
        smallest = left;

    if (right < length && arr[right] < arr[smallest])
        smallest = right;

    if (smallest != root) {
        swap(arr[root], arr[smallest]);
        minHeapifyDown(smallest);
    }
}

void MinHeap::minHeapifyUp(int index) {
    int parent = (index - 1) / 2;

    if (index > 0 && arr[index] < arr[parent]) {
        swap(arr[index], arr[parent]);
        minHeapifyUp(parent);
    }
}


void MinHeap:: printHeap(){ 
    if(isEmpty()){ 
        cout << "Heap is Empty" << endl; 
        return; 
    }
    for(int i = 0; i < length; i++){ 
        cout << arr[i] << " "; 
    }
    cout << endl; 
}