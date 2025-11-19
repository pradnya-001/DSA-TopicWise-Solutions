#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        
        // Loop through each string
        for (string s : strs) {
            string temp = s;                 // copy original string
            sort(temp.begin(), temp.end());  // sort letters
            
            mp[temp].push_back(s);           // group by sorted key
        }
        
        // Prepare the result
        vector<vector<string>> result;
        for (auto &it : mp) {
            result.push_back(it.second);
        }

        return result;
    }
};

int main() {
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    
    Solution obj;
    vector<vector<string>> ans = obj.groupAnagrams(strs);

    // Print result
    for (auto group : ans) {
        for (auto word : group) {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}
