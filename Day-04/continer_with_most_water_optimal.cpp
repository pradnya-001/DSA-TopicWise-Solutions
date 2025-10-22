#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxArea(vector<int>& height) {
       int maxWater = 0;
       int lp = 0, rp = height.size() - 1;
       while(lp < rp){
              int wt = rp - lp;
              int ht = min(height[lp], height[rp]);
              int currWater = wt * ht;
    
              maxWater = max(maxWater, currWater);
    
            //   if(height[lp] < height[rp]){
            //     lp++;
            //   }
            //   else{
            //     rp--;
            //   }
            height[lp] < height[rp] ? lp++ : rp--;
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
//time complexity: O(n)