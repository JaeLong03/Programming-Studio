#include "stackInt.h"
#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

int main() {
    string name; 
    double gpa; 
    MyStackInt a;
    
    ifstream file("list2.txt");
    if (!file) {
        cerr << "Error to find file!" << endl;
        return 1;
    }


    while (file >> gpa >> name) {
        if (gpa > a.getGpa()) {
            a.setGpa(gpa); 
            while(!a.isEmpty()){
                a.pop(); 
            }
            a.push(name); 
        }
        else if(gpa == a.getGpa()){ 
            a.push(name); 
        }
    }

    a.display(); 
    file.close();
    
    return 0; 
}
