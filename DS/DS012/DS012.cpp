#include <iostream> 
#include <string> 
#include <algorithm> 
using namespace std; 

struct product{ 
    string name; 
    int price; 
    string publisher; 
}; 


bool strComp(string a, string b) {
    string lowerA = a, lowerB = b;
    transform(lowerA.begin(), lowerA.end(), lowerA.begin(), ::tolower);
    transform(lowerB.begin(), lowerB.end(), lowerB.begin(), ::tolower);
    return lowerA == lowerB;
}

int main(){ 

    product *arr = new struct product[2]; 
    int i; 

    for(i = 0; i < 2; i++){ 
        cin >> arr[i].name >> arr[i].price >> arr[i].publisher;
    }

    if(!strComp(arr[0].name, arr[1].name)){
        cout << arr[0].name << " and " << arr[1].name << " are not equal."; 
    }
    else if(!(arr[0].price == arr[1].price)){
        cout << arr[0].price << " and " << arr[1].price << " are not equal."; 
    }
    else{ 
        cout << arr[0].name << " is equal."; 
    }


    return 0; 
}