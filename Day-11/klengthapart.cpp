#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n = nums.size();
        int lastone = -(k + 1); // initialize last seen 1 far away
        
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                // distance between current and previous 1 must be >= k
                if (i - lastone - 1 < k)
                    return false;

                lastone = i; // update last seen 1 index
            }
        }
        return true;
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> nums = {1, 0, 0, 0, 1};
    int k = 2;

    bool result = sol.kLengthApart(nums, k);

    if (result)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}
