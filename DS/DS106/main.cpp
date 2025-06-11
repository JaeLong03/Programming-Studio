#include "MinHeap.h"
#include <iostream>
using namespace std;

int main() {
    int choice;
    MinHeap a;  

    while (true) {
        cout << "1.Array to minHeap 2.insert 3.delete 4.print 0.quit > ";
        cin >> choice;

        switch (choice) {
            case 1:
                a = MinHeap(); 
                cout << "minHeap => ";
                a.printHeap();
                break;

            case 2: {
                int temp;
                cin >> temp;
                a.insertKey(temp);
                cout << "minHeap => ";
                a.printHeap();
                break;
            }

            case 3:
                if (!a.isEmpty()) {
                    cout << "min value: " << a.deleteKey() << endl;
                    cout << "minHeap => ";
                    a.printHeap();
                } else {
                    cout << "Heap is empty!" << endl;
                }
                break;

            case 4:
                a.printHeap();
                break;

            case 0:
                cout << "bye" << endl;
                return 0;

            default:
                cout << "Invalid choice!" << endl;
        }
    }
}
