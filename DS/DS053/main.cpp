#include "queueInt.h"
#include <iostream>
#include <fstream> 
#include <sstream> 
using namespace std;

int main() {
    int cnt = 0; 
    double max = 0; 
    string input; 
    ifstream file("data.txt"); 

    while(getline(file, input)) cnt++; 
    file.clear();
    file.seekg(0, ios::beg);
    
    MyQueueInt myQueue(cnt);
    Student s; 

    while(getline(file, input)){ 
        double gpa;
        string name;
        stringstream ss(input);
        ss >> gpa >> name;
        s.setData(gpa, name); 

        myQueue.enqueue(s); 
        if(stod(input.substr(0,3)) > max)
            max = stod(input.substr(0,3)); 
    }

    cout << "Highest GPA = " << max << endl; 
    myQueue.getName(max); 

    return 0;
}