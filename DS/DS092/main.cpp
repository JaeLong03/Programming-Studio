#include <iostream>
#include <queue> 

using namespace std;

int findKthLargest(int nums[], int n, int k) {
    priority_queue<int> pq;

    for (int i = 0; i < n; ++i) {
        pq.push(nums[i]);
    }

    for (int i = 1; i < k; ++i) {
        pq.pop();
    }

    return pq.top();
}

int main() {
    int n, k;
    cin >> n >> k;

    int nums[n];

    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    cout << findKthLargest(nums, n, k) << endl;

    return 0;
}
