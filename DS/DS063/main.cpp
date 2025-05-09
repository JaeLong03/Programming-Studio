#include <iostream>
#include "queueIntList.h"
using namespace std; 

int main(){
    MyQueueIntList *p1 = new MyQueueIntList(); 
    MyQueueIntList *p2 = new MyQueueIntList(); 
    int cnt, num; 
    int who = 0; 
    int card1,card2; 
    int win1 = 0, win2 = 0; 
    cin >> cnt; 

    for(int i = 0; i < cnt *2; i++){ 
        if(i < cnt){ 
            cin >> num; 
            p1->enqueue(num); 
        }
        else{ 
            cin >> num; 
            p2->enqueue(num); 
        }
    }

    for(int i = 0; i < cnt; i++){ 
        if(who == 0){ 
            card1 = p1->dequeue();
            card2 = p2->dequeue();
        }
        else if(who == 1){ 
            card1 = p1->dequeue() + (card1-card2-1); 
            card2 = p2 ->dequeue(); 
        }
        else if (who == 2){ 
            card2 = p2->dequeue() + (card2-card1-1); 
            card1 = p1 ->dequeue(); 
        }

        cout << "Round" << (i+1) << " - "; 
        if(card1 > card2){ 
            cout << "P1 win!" << endl; 
            win1++; 
            who = 1; 
        } 
        else if(card1 < card2){ 
            cout << "P2 win!" << endl; 
            win2++; 
            who = 2; 
        } 
        else{ 
            cout << "Draw!" << endl; 
            who = 0; 
        } 
    }

    cout << "Final - "; 
    if(win1 > win2) cout << "P1 win!" << endl; 
    else if(win1 < win2) cout << "P2 win!" << endl; 
    else cout << "Draw!" << endl; 

    return 0;
}