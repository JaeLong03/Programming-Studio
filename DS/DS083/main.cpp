#include <iostream>
using namespace std;
#define _DEBUG

int size = 0; 

void printArray(int* arr, int size)
{
    cout << "==> Heap : ";
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

void insertKey(int arr[], int N, int value)
{
    if (size == N - 1)
    {
        cout << "\nOverflow: Could not insertKey\n";
        return;
    }

    int k = size; 

    while(k != 0 && value > arr[k/2]){ 
        arr[k] = arr[k/2]; 
        k = k/2; 
    }

    arr[k] = value; 
    size++; 

#ifdef _DEBUG
    printArray(arr, size);
#endif  
}

void maxHeapify(int arr[], int rooti)
{
    int left = 2 * rooti + 1;
    int right = 2 * rooti + 2;
    int largest = rooti;

    if (left < size && arr[left] > arr[largest])
        largest = left;

    if (right < size && arr[right] > arr[largest])
        largest = right;

    if (largest != rooti)
    {
        swap(arr[rooti], arr[largest]);
        maxHeapify(arr, largest);
    }
}

void deleteKey(int arr[], int N){
    if (size == 0)
    {
        cout << "\nCould not deleteKey\n";
        return;
    }
#ifdef _DEBUG
    cout << "=> Delete " << arr[0] << endl;
#endif    
    arr[0] = arr[size - 1]; 
    size--;                
    maxHeapify(arr, 0);  
    
#ifdef _DEBUG
    printArray(arr, size);
#endif     
}

int main()
{
    int arr[20];
    int menu;
    while(1){        
        cout << "1. insert 2.delete 3.print 4.quit > " ;
        cin >> menu;
        if(menu == 1){
            int value;
            cout << "new value? ";
            cin >> value;
            insertKey(arr, 20, value);
        }
        else if(menu == 2){            
            deleteKey(arr, 20);
        }
        else if(menu == 3){
            printArray(arr, size);
        }
        else break;
    }
    cout << "Bye!" << endl;
    
    return 0;
}