#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countCollisions(string s) {
        int n = s.size();
        int left = 0, right = n - 1;

        // Skip leading L's (they never collide)
        while (left < n && s[left] == 'L') left++;

        // Skip trailing R's (they never collide)
        while (right >= 0 && s[right] == 'R') right--;

        int collisions = 0;

        // In the middle, all non-'S' characters will collide
        for (int i = left; i <= right; i++) {
            if (s[i] != 'S')
                collisions++;
        }
        return collisions;
    }
};

int main() {
    string s;
    cout << "Enter the road string (L, R, S): ";
    cin >> s;

    Solution obj;
    int result = obj.countCollisions(s);

    cout << "Total Collisions = " << result << endl;

    return 0;
}
