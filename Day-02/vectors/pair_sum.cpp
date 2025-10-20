#include <iostream>
#include <vector>
 using namespace std;

 vector <int> Pairsum(vector<int> nums ,int target){
    vector <int> ans;
    int n = nums.size();
    for(int i = 0;i< n;i++){
        for(int j = i+1 ;j<n;j++){
            if(nums[i] + nums[j] == target){
                ans.push_back(ans[i]);
                ans.push_back(ans[j]);
                return ans;
            }
        }
    }
    return ans;
 }

int main() {
   vector <int> nums = {2,4,3,5,7,8,9};
   int target = 7;
//    int n = sizeof(nums)/sizeof(nums[0]);

   vector <int> ans = Pairsum(nums,target);
   cout << ans[0] << ans[1] << endl;

    return 0;
}
