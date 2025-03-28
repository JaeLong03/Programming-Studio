#include <iostream> 
using namespace std; 

struct product{ 
    char name[100]; 
    int price; 
    char publisher[100]; 
}; 


bool strComp(char a[], char b[]) {
    char a1[100]; 
    char b1[100]; 
    int i;  
    for (i = 0; a[i] != '\0'; i++) { 
        if (a[i] >= 'a' && a[i] <= 'z') { 
            a1[i] = a[i] - 32;
        }
        else{ 
            a1[i] = a[i]; 
        }
    }
    a1[i] = '\0';


    for (i = 0; a[i] != '\0'; i++) { 
        if (b[i] >= 'a' && b[i] <= 'z') { 
            b1[i] = b[i] - 32;
        }
        else{ 
            b1[i] = b[i];
        }
    }
    b1[i] = '\0';

    //cout << a1 << b1 << endl;

    for(i = 0; a1[i] != '\0'; i++){ 
        if(a1[i] != b1[i])
            return false; 
    }
    return true; 
}

int main(){ 

    product *arr = new product[2]; 
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

    delete[] arr; 

    return 0; 
}