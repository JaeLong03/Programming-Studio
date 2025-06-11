#include <vector>
#include <iostream>
using namespace std; 

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, candidate = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (count == 0)
                candidate = nums[i];
            count += (nums[i] == candidate) ? 1 : -1;
        }
        return candidate;
    }
};

int main(){ 
    int num; 
    cin >> num; 

    vector<int> a; 
    for(int i = 0; i < num; i++){ 
        int temp; 
        cin >> temp; 
        a.push_back(temp); 
    }

    Solution b; 
    cout << b.majorityElement(a) << endl; 
    return 0; 
}