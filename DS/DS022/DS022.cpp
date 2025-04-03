#include <iostream>
using namespace std; 

class Student{ 
    private:
        string name; 
        int LC; 
        int RC; 
        bool inRange(int num); 
        bool isPass(int num); 

    public: 
        void getInfo(); 
        void print(); 
}; 

void Student:: getInfo(){ 
    getline(cin, name);
    cout << "LC> "; 
    cin >> LC; 
    while(!inRange(LC)){ 
        cout << "LC> ";  
        cin >> LC; 
    }

    cout << "RC> "; 
    cin >> RC; 
    while(!inRange(RC)){ 
        cout << "RC> "; 
        cin >> RC; 
    }
}

bool Student:: inRange(int num){ 
    if(num <= 450 && num >= 0)
        return true; 
    return false; 
}

bool Student:: isPass(int num){ 
    if(num >= 250)
        return true; 
    return false; 
}

void Student:: print(){ 
    cout << "[" << name << "]" << endl; 
    cout << "LC - " << LC;
    if(isPass(LC))
        cout << " Pass" << endl; 
    else
        cout << " Fail" << endl; 

    cout << "RC - " << RC;
    if(isPass(RC))
        cout << " Pass" << endl; 
    else
        cout << " Fail" << endl;
}

int main(){ 
    Student *s = new Student; 

    s -> getInfo(); 
    s -> print(); 

    delete s;
    return 0; 
}