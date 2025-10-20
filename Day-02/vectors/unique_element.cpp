#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int val : nums) {
            ans = ans ^ val;
        }
        return ans;
    }
};

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};

    Solution obj;                      // create object
    int result = obj.singleNumber(nums);  // call the function

    cout << "The single number is: " << result << endl;
    return 0;
}
