#include <iostream> 
using namespace std; 

class Product{ 
    string name; 
    int price; 
    int discount; 
    string publisher; 
    string size; 

    public: 
        Product(string n, int p, int d, string m, string s);
        int getDiscount(); 
        void print(); 
}; 

Product:: Product(string n, int p, int d, string m, string s){ 
    name = n; 
    price = p; 
    discount = d; 
    publisher = m; 
    size = s; 
}

int Product:: getDiscount() {
    return price * (100 - discount) / 100;
}

void Product:: print(){ 
    cout << getDiscount() << " (-" << discount << "%) " 
             << name << " " << size << " " << publisher << endl;
}

int main(){ 
    Product* productList[100]; 
    int count = 0; 
    int choice;

    while (true) {
        cout << "1. Add  2. List  3. Quit > ";
        cin >> choice;

        if (choice == 1) {
            if (count >= 100) {
                cout << "더 이상 상품을 추가할 수 없습니다." << endl;
                continue;
            }

            string name, publisher, size;
            int price, discount;

            cin.ignore(); 
            getline(cin, name); 
            cin >> price >> discount >> size >> publisher; 

            productList[count++] = new Product(name, price, discount, publisher, size);
        } 
        else if (choice == 2) {
            for (int i = 0; i < count; i++) {
                productList[i]-> print();
            }
        } 
        else if (choice == 3) {
            for (int i = 0; i < count; i++) {
                delete productList[i];
            }
            break;
        }
    }

    return 0;

}