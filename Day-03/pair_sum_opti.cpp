#include <iostream>
#include <vector>
using namespace std;

vector<int> Pairsum(vector<int> nums, int target) {
    int i = 0;
    int n = nums.size();
    int j = n - 1;

    while (i < j) {
        int sum = nums[i] + nums[j];
        if (sum == target) {
            return {i, j};
        }
        else if (sum > target) {
            j--;
        }
        else {
            i++;
        }
    }
    return {-1, -1}; // No pair found
}

int main() {
    vector<int> nums = {2, 3, 4, 5, 7, 8, 9};
    int target = 7;

    vector<int> ans = Pairsum(nums, target);

    if (ans[0] != -1)
        cout << "Pair found at indices: " << ans[0] << " and " << ans[1] << endl;
    else
        cout << "No pair found for target " << target << endl;

    return 0;
}
