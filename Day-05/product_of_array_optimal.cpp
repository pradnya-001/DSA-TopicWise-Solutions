#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);
        vector<int> preffix(n, 1);
        vector<int> suffix(n, 1);

        // Build prefix array
        for(int i = 1; i < n; i++){
            preffix[i] = preffix[i - 1] * nums[i - 1];
        }

        // Build suffix array
        for(int i = n - 2; i >= 0; i--){
            suffix[i] = suffix[i + 1] * nums[i + 1];
        }

        // Final answer using prefix and suffix
        for(int i = 0; i < n; i++){
            ans[i] = preffix[i] * suffix[i];
        }

        return ans;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4};
    Solution sol;
    vector<int> result = sol.productExceptSelf(nums);

    cout << "Product Except Self: ";
    for(int val : result){
        cout << val << " ";
    }
}
