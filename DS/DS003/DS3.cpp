#include <iostream> 
using namespace std; 

int main(){ 
    int month, day; 
    int day_count; 
    int i; 

    cin >> month >> day; 

    day_count = 0; 
    for(i = 1; i < month; i++){ 
        switch(i){ 
            case 2: 
                day_count += 28; 
                break; 
            case 4:
            case 6:
            case 9:
            case 11:
                day_count += 30; 
                break; 
            default: 
                day_count += 31; 
                break; 
        }
    }

    day_count += day; 
    cout << day_count; 

    return 0; 
}