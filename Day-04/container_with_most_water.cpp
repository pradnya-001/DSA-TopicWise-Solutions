#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        for (int i = 0; i < height.size(); i++) {
            for (int j = i + 1; j < height.size(); j++) {
                int wt = j - i;
                int ht = min(height[i], height[j]); 
                int currWater = wt * ht; 

                maxWater = max(maxWater, currWater);
            }
        }
        return maxWater;
    }
};

int main() {
    Solution sol;
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << "Maximum area: " << sol.maxArea(height) << endl;
    return 0;
}
//time complexity: O(n^2)