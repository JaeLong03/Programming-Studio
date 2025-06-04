#include <iostream>
using namespace std; 

class node {
    public:
    int data; 
    string name; 
    node* link; 
    node(int x, string n); 
};

node:: node(int x, string n){ 
    data = x; 
    name = n; 
    link = NULL; 
}

class LinkedList{ 
    node *start; 
    node *last; 

    public: 
    LinkedList(); 
    void swapNode(node *x, node* y); 
    void addLast(node *t); 
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

void LinkedList:: addLast(node *t){ 
    node* temp = t;  
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
    int cnt = 1; 
    while(temp -> link != NULL){ 
        cout << cnt << "> " << temp->data << " " << temp ->name << endl; 
        temp  = temp ->link; 
        cnt++; 
    }
    cout << cnt << "> " << temp->data << " " << temp ->name << endl; 
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
            if(key->data < temp->data) swapNode(key, temp); 
            temp = temp -> link; 
        }
        key = key->link; 
    }
}


int main(){ 
    int choice; 
    int score; 
    string name; 
    LinkedList a; 

    cin >> choice; 
    for(int i = 0; i< choice; i++){ 
        cin >> score >> name; 
        node *p = new node(score, name); 
        a.addLast(p); 
    }
    a.selectionLinked(); 
    a.printLinked(); 
    
    return 0; 
}