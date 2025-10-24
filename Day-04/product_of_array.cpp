#include <iostream>
#include <vector>
using namespace std;

// Brute-force approach to find the product of array except self
//time complexity: O(n^2)
//space complexity: O(1) excluding the output array

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j) {
                    ans[i] *= nums[j];
                }
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = sol.productExceptSelf(nums);

    cout << "Product Except Self: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
