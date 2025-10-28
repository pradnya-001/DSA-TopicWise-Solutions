#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        while(left < right) {
            int mid = (left + right) / 2;

            // Check pairing pattern
            if((mid % 2 == 0 && nums[mid] == nums[mid + 1]) ||
               (mid % 2 == 1 && nums[mid] == nums[mid - 1])) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        return nums[left];
    }
};

int main() {
    vector<int> nums = {1,1,2,3,3,4,4,8,8}; // Sample Input
    Solution obj;
    
    cout << "Single Element: " << obj.singleNonDuplicate(nums) << endl;
    return 0;
}
