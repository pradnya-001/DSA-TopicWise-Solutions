#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int cnt[101] = {0};

       
        for (int x : nums) cnt[x]++;

        // Prefix sum to know how many are smaller
        for (int i = 1; i <= 100; i++)
            cnt[i] += cnt[i - 1];

        vector<int> ans(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            ans[i] = (x == 0 ? 0 : cnt[x - 1]);
        }
        return ans;
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    vector<int> result = obj.smallerNumbersThanCurrent(nums);

    cout << "Result: ";
    for (int x : result) cout << x << "   ";
    cout << endl;

    return 0;
}
