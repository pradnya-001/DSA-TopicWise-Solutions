#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();

        // Edge cases
        if(n == 1) return nums[0];
        if(nums[0] != nums[1]) return nums[0];
        if(nums[n-1] != nums[n-2]) return nums[n-1];

        // Linear search
        for(int i = 1; i < n-1; i++) {
            if(nums[i] != nums[i-1] && nums[i] != nums[i+1]) {
                return nums[i];
            }
        }
        
        return -1; // Just in case (all you have valid input)
    }
};

int main() {
    vector<int> nums = {1,1,2,3,3,4,4,8,8}; // Sample Input
    Solution obj;

    cout << "Single Element: " << obj.singleNonDuplicate(nums) << endl;
    return 0;
}
