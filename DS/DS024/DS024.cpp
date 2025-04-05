#include <iostream>
#include <sstream>
#include <fstream>
#define MAX 50

using namespace std;
string kname[2] = {"A+~F", "P/F"}; // String for grading

class MyClass{
private:
	int code;		    // class code
	string name; 	// class name
	int unit;		    // credites
	int grading;	    // grading category (1:A+~F, 2:P/F)
public:
    MyClass(int ncode, string nname, int nunit, int ngrading){
        code = ncode; name = nname; unit = nunit; grading = ngrading;
    }
    ~MyClass();
    int getCode(){return code;}
    string getName(){return name;}
    int getUnit(){return unit;}
    int getGrading(){return grading;};
    void setCode(int newcode){code = newcode;}
    void setName(string newname){name = newname;}
    void setUnit(int newunit){unit = newunit;}
    void setGrading(int newgrading){grading = newgrading;}
    string toString(){
        stringstream sstm;
        sstm <<  "[" << code << "] " << name << " [credit " << unit << " - "+kname[grading-1] << "]";
        return sstm.str();
    }
    string toStringSave(){
        stringstream sstm;
        sstm << code << " " << name << " " << unit << " " << grading;
        return sstm.str();
    }
};

class MyClassManager{
private:
    MyClass* allclasses[MAX];
    MyClass* myclasses[10];
    int count;
    int mycount;
public:
    MyClassManager(){
        count=0; mycount=0;
    }
    ~MyClassManager(){}
    int getCount(){return count;}
    int getMyCount(){return mycount;}

    void loadData(string filename);
    void printAllClasses(); // Print all class list
    void findClasses(string name); // Search a class by name from the list
    void saveAllClasses(string filename); // Save all class list

    // Functions for modifying
    void addClass(); // Add a class into the list
    void editClass(); // Modify a class in the list

    // Functions for making
    void applyMyClass(); // Apply a class
    void printMyClasses(); // Print my classes
    void saveMyClasses(string filename); // Save my classes
};


int main() {
	int no;	// menu number 
    int quit = 0;
	string name;

	MyClassManager manager; // MyClassManager obj

	manager.loadData("classes.txt");

	while(!quit){
		cout << "Menu 1.List 2.Add 3.Modify 4.Search 5.Apply 6.My classes 7.Save 0.Quit\n";
		cout << ">> Menu? > ";
		cin >> no;
        switch(no){
            case 1: 
			    cout << "> 1.Print All Classes\n";
	    		manager.printAllClasses();
                break;
            case 2:
			    cout << "> 2.Add a Class\n";
    			manager.addClass();
                break;
		    case 3:
    			cout << "> 3.Modify a Class\n";
	    		manager.editClass();
                break;
            case 4:
            	cout << "> 4.Search a Class\n";
			    cout << ">> Enter class name > ";
			    cin >> name;
    			manager.findClasses(name);
                break;
		    case 5:
    			cout << "> 5.Apply a class\n";
	    		manager.applyMyClass();
		    	cout << manager.getMyCount() << " classes has been applied.\n";
                break;
    		case 6:
    			cout << "> 6.My classes\n";
	    		manager.printMyClasses();
                break;
    		case 7:
    			cout << "> 7.Save\n";
	    		manager.saveMyClasses("myclasses.txt");
		    	cout << "\n> All my classes ware saved to my_classes.txt.\n";
			    manager.saveAllClasses("classes.txt");
			    cout << "\n> All of class list ware saved to classes.txt.\n";
                break;
            case 0:
                quit = 1;
                break;
		}
	}
	return 0;
}

void MyClassManager::loadData(string filename){
    string line, name;
    int code, unit, grading;
	ifstream file(filename);
	while(!file.eof()){
        if(file.eof()) break;
		file >> code >> name >> unit >> grading;
        allclasses[count] = new MyClass(code, name, unit, grading);
		count++;
	}
	file.close();
    cout << count << " classes are loaded.\n";
}

void MyClassManager::printAllClasses(){
	for (int i=0; i<count; i++){
		cout << allclasses[i]->toString() << endl;
	}

    cout << endl; 
}

void MyClassManager::saveAllClasses(string filename){
	ofstream file(filename);
	for(int i=0; i<count; i++){
		file << allclasses[i]->toStringSave();
        if(i<count-1) file << endl;
	}
	file.close();	
}

void MyClassManager::findClasses(string name){
	int found = 0;
	cout << "Searching keyword: " << name << endl;
	for(int i=0; i<count; i++){
		if(allclasses[i]->getName().find(name) != string::npos){
		    cout << allclasses[i]->toString() << endl;
			found++;
		}
	}
	cout << count << " classes found.\n";
}

// You must complete these functions.
void MyClassManager::addClass(){
// Caution : Don't allow the duplicate class code.
// You must complete this function.
    string name;
    int code, unit, grading;
    int i; // variable for loop 

    while(true){ 
        cout << ">> code number > ";
	    cin >> code;
        bool dup = false; 
        for(i = 0; i < count; i++){ 
            if(code == allclasses[i]->getCode()){ 
                cout << "Code duplicated! Retry" << endl; 
                dup = true; 
                break; 
            }
        }
        if(dup == false){ 
            break; 
        }
    }

    while(true){ 
        cout << ">> class name > ";
	    cin >> name;
        bool dup = false; 
        for(i = 0; i < count; i++){ 
            if(name == allclasses[i]->getName()){ 
                cout << "Name duplicated! Retry" << endl; 
                dup = true; 
                break; 
            }
        }
        if(dup == false){ 
            break; 
        }
    }
	cout << ">> credits > ";
	cin >> unit;
	cout << ">> grading (1: A+~F, 2: P/F) > ";
	cin >> grading;

    allclasses[count++] = new MyClass(code, name, unit, grading); 
    cout << endl; 
}

void MyClassManager::editClass(){
    string name;
    int code, unit, grading;
    int i; 

    while(true){ 
        bool found = false; 
        cout << ">> Enter a code of class > ";
	    cin >> code;
        for(i = 0; i < count; i++){ 
            if(code == allclasses[i]->getCode()){ 
                found = true; 
                cout << "> Current: " << allclasses[i] -> toString() << endl; 
                
                cout << ">> Enter new class name > "; 
                cin >> name; 
                allclasses[i] -> setName(name); 

                cout << ">> Enter new credits > "; 
                cin >> unit; 
                allclasses[i] -> setUnit(unit); 

                cout << ">> Enter new grading(1: A+~F, 2: P/F) > "; 
                cin >> grading; 
                allclasses[i] -> setGrading(grading); 

                cout << "> Modified" << endl; 

                break; 
            }
        }

        if(found == false){ 
            cout << "> No such class." << endl; 
        }
        else{ 
            break; 
        }
    }

    cout << endl; 
}

void MyClassManager::applyMyClass(){
    int code, yes; 
    int i; 

    while(true){
        bool found = false; 
        cout << ">> Enter a class code > "; 
        cin >> code;
        for(i = 0; i < count; i++){ 
            if(code == allclasses[i]->getCode()){
                found = true;

                bool already = false;
                for(int j = 0; j < mycount; j++){
                    if(myclasses[j]->getCode() == code){
                        already = true;
                        break;
                    }
                }

                if(already){
                    cout << "> This class is already applied!\n";
                } else {
                    myclasses[mycount++] = allclasses[i]; 
                    cout << allclasses[i]->toString() << endl;
                }
                break;
            } 
        }

        if(!found){ 
            cout << "> No such code of classes" << endl; 
            found = true; 
        }
        else if(found){ 
            cout << ">> Add more? (1:Yes 2:No) > "; 
            cin >> yes; 
            if(yes == 1){continue;}
            else if (yes == 2){break;};
        }
    }
    
	cout << endl; 
}

void MyClassManager::printMyClasses(){
    int total = 0; 

    for (int i=0; i<mycount; i++){
		cout << i+1 << ". "<< myclasses[i]->toString() << endl;
        total += myclasses[i] -> getUnit(); 
	}
    cout << "All : " << total << " credits" << endl; 

    cout << endl; 
}

void MyClassManager::saveMyClasses(string filename){

    ofstream file(filename);
    if (!file) {
        cerr << "Error opening file for saving.\n";
        return;
    }

    file << "My Classes\n";

    int totalCredit = 0;
    int aplusfCredit = 0;
    int pfCredit = 0;

    for (int i = 0; i < mycount; i++) {
        MyClass* cls = myclasses[i];
        file << i + 1 << ". " << cls->toString() << "\n";

        int unit = cls->getUnit();
        totalCredit += unit;

        if (cls->getGrading() == 1)
            aplusfCredit += unit;
        else if (cls->getGrading() == 2)
            pfCredit += unit;
    }

    file << "All : " << mycount << " classes, " << totalCredit << " credits ";
    file << "(A+~F " << aplusfCredit << " credits, P/F " << pfCredit << " credits)\n";

    file.close();
	
    cout << endl; 
}