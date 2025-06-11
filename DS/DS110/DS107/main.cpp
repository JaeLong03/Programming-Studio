#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int *arr1 = new int[a];
    int *arr2 = new int[b];

    for (int i = 0; i < a; i++) cin >> arr1[i];
    for (int i = 0; i < b; i++) cin >> arr2[i];

    sort(arr1, arr1 + a, greater<int>());
    sort(arr2, arr2 + b, greater<int>());

    int i = 0, j = 0;

    while (i < a && j < b) {
        if (arr1[i] >= arr2[j])
            cout << arr1[i++] << " ";
        else
            cout << arr2[j++] << " ";
    }

    while (i < a) cout << arr1[i++] << " ";
    while (j < b) cout << arr2[j++] << " ";

    delete[] arr1;
    delete[] arr2;

    return 0;
}
