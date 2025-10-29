#include <iostream>
using namespace std;

class Solution {
public:
    int smallestNumber(int n) {
        int x = n;
        while ((x & (x + 1)) != 0) {
            x++;
        }
        return x;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter a number ";
    cin >> n;

    int result = sol.smallestNumber(n);
    cout << "Smallest number >= " << n << " such that x & (x+1) == 0 : " << result << endl;

    return 0;
}
