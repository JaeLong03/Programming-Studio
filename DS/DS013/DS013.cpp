#include <iostream> 
using namespace std; 

struct Cafe{ 
    char name[100]; 
    int menu_Num; 
    struct Menu *list;
};

struct Menu{ 
    char menu_Name[100]; 
    int price; 
};

void addCafe(Cafe &r1); 
void addMenu(Menu &m1); 
void displayMenu(Cafe &r1); 

int main(){ 

    struct Cafe *cf; 
    addCafe(*cf); 
    displayMenu(*cf); 

    return 0; 
}

void addCafe(Cafe &r1){ 
    cin.getline(r1.name, 100, '\n');  
    cin >> r1.menu_Num; 

    r1.list = new Menu[r1.menu_Num]; 
    for(int i; i < r1.menu_Num; i++){ 
        addMenu(r1.list[i]); 
    }
}

void addMenu(Menu &m1){ 
    cin >> m1.menu_Name >> m1.price; 
}

void displayMenu(Cafe &r1){ 
    cout << "===== " << r1.name << " =====" << endl; 
    
    for(int i = 0; i < r1.menu_Num; i++){ 
        cout << r1.list[i].menu_Name << " " << r1.list[i].price << endl; 
    }
    cout << "====================" << endl; 
}
