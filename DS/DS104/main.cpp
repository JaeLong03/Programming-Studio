#include <iostream>
using namespace std; 

class node {
    public:
    int data; 
    node* link; 
    node(int x); 
};

node:: node(int x){ 
    data = x; 
    link = NULL; 
}

class LinkedList{ 
    node *start; 
    node *last; 

    public: 
    LinkedList(); 
    void swapNode(node *x, node* y); 
    void addLast(int y); 
    void printLinked(); 
    void clearLinked(); 
    void selectionLinked(); 
}; 

LinkedList:: LinkedList(){ 
    start = last = NULL; 
}

void LinkedList:: swapNode(node *x, node *y){ 
    int temp = x -> data; 
    x-> data = y -> data; 
    y-> data = temp; 
}

void LinkedList:: addLast(int y){ 
    node* temp = new node(y); 
    if(start == NULL){ 
        start = temp; 
        last = temp; 
    }
    else{ 
        last->link = temp; 
        last = temp; 
    }
}

void LinkedList:: printLinked(){ 
    node *temp = start; 
    while(temp -> link != NULL){ 
        cout << temp->data << " "; 
        temp  = temp ->link; 
    }
    cout << temp ->data << endl; 
}

void LinkedList:: clearLinked(){ 
    node* temp; 
    while(start != NULL){ 
        temp = start; 
        start = start->link; 
        delete(temp); 
    }
    start = last = NULL; 
}

void LinkedList:: selectionLinked(){ 
    node* key; 
    node* temp; 

    key = start; 
    while(key != NULL){ 
        temp = key->link; 
        while(temp != NULL){ 
            if(key->data > temp->data) swapNode(key, temp); 
            temp = temp -> link; 
        }
        key = key->link; 
    }
}


int main(){ 
    int choice; 
    LinkedList a; 
    while(true){ 
        cout << "How many numbers do you want to create (0:exit) ... "; 
        cin >> choice; 

        if(choice == 0) break; 

        int num; 
        a.clearLinked(); 
        cout << "Enter numbers... " << endl; 
        for(int i = 0; i< choice; i++){ 
            cin >> num; 
            a.addLast(num); 
        }
        a.selectionLinked(); 
        a.printLinked(); 
    }
    return 0; 
}