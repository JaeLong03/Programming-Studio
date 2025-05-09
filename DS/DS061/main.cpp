#include <iostream>
#include "queueIntList.h"
using namespace std; 

int main()
{
    MyQueueIntList *a = new MyQueueIntList(); 
    int choice, flag=1, value;
    while( flag == 1){
        cout<<"\n1.enqueue 2.dequeue 3.showfront 4.showrear 5.displayQueue 6.exit ";
        cin>>choice;
        switch (choice){
            case 1: cout<<"Enter Value: ";
                    cin>>value;
                    a->enqueue(value);
                    break;
            case 2: a->dequeue();
                    break;
            case 3: a->showfront();
                    break;
            case 4: a->showrear(); 
                    break; 
            case 5: a->display();
                    break;
            case 6: cout << "bye!!" << endl; 
                    flag = 0;
                    break;
            }
 }

 return 0;
}