#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i = nums.size() - 1;

        // Step 1: Find the first decreasing element from the right
        while (i > 0 && nums[i - 1] >= nums[i]) {
            i--;
        }

        // If no decreasing element found, this is the last permutation
        if (i == 0) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 2: Find the next just-greater element
        int j = nums.size() - 1;
        while (j >= i && nums[j] <= nums[i - 1]) {
            j--;
        }

        // Step 3: Swap them
        swap(nums[i - 1], nums[j]);

        // Step 4: Reverse the remaining part
        reverse(nums.begin() + i, nums.end());
    }
};

int main() {
    vector<int> nums = {1, 2, 3};

    Solution obj;
    obj.nextPermutation(nums);

    cout << "Next Permutation: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
