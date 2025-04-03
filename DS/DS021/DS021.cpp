#include <iostream> 
using namespace std; 

class Student{ 
	private: 
		double getAvg() const; 
	public:
		string name; 
		string std; 
		int *score; 
		void print() const; 
}; 

double Student:: getAvg() const{ 
	int i, total; 
	double avg; 

	total = 0;
	for(i = 0; i < 3; i++){ 
		total += score[i]; 
	}
	avg = (double) total / 3.0; 
	return avg; 
}

void Student:: print() const{ 
	cout << "[" << std << "] " << name << endl; 
	cout << "The average score is " << getAvg() << endl; 
}

int main(){ 
	Student s1; 

	s1.score = new int[3]; 
	cin >> s1.std >> s1.score[0] >> s1.score[1] >> s1.score[2]; 
	cin.ignore();
	getline(cin, s1.name); 

	s1.print(); 
	delete[] s1.score;
	
	return 0; 
}
