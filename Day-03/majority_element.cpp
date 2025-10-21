#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        for (int val : nums) {
            int freq = 0;

            for (int el : nums) {
                if (el == val) {
                    freq++;
                }
            }

            if (freq > n / 2) {
                return val; // return majority element
            }
        }

        return -1; // ✅ Added: ensures function always returns an int
    }
};

int main() {
    Solution obj;
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    int result = obj.majorityElement(nums);
    cout << "Majority Element: " << result << endl;

    return 0;
}
