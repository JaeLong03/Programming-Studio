#include <iostream>
#include <vector>
#include "sort.h"  

using namespace std;

int main(){ 
    int N, K;
    cin >> N >> K;

    int A[N], B[N]; 
    for (int i = 0; i < N; ++i) cin >> A[i];
    for (int i = 0; i < N; ++i) cin >> B[i];

    ascenBubbleSort(A, N); 
    descenBubbleSort(B, N);  
    int swapCount = 0;

    for (int i = 0; i < K; ++i) {
        if (A[i] < B[i]) {
            swap(A[i], B[i]);
            swapCount++;
        } else {
            continue;
        }
    }

    int sum = 0;
    for (int i = 0; i < N; ++i) sum += A[i];

    cout << swapCount << " " << sum << endl;

    return 0;
}
