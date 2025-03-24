#include <iostream> 
#include <cstdio>
using namespace std; 

struct st_score{ 
    int kor, eng, math; 
    int total;
    double average;
};

int main(){ 
    st_score one; 
    char sub[3][20] = {"Korean", "English", "Math"}; 
    int i; 

    cin >> one.kor >> one.eng >> one.math; 
    one.total = one.kor + one.eng + one.math; 

    one.average = one.total / 3.0; 

    cout << one.total << " "; 
    printf("%.1f", one.average); 
    cout << endl;

    for(i = 0; i < 3; i++){ 
        cout << sub[i] << " - "; 
        if(i == 0 && one.kor >= 70)
            cout << "Pass\n"; 
        else if(i == 1 && one.eng >= 70)
            cout << "Pass\n"; 
        else if(i == 2 && one.math >= 70)
            cout << "Pass\n"; 
        else 
            cout << "Fail\n"; 
    } 

    return 0; 
}