#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int st = 1, end = A.size() - 2; // Avoid boundary access

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (A[mid] > A[mid - 1] && A[mid] > A[mid + 1]) {
                return mid;
            }
            else if (A[mid] > A[mid - 1]) {
                st = mid + 1;
            } 
            else {
                end = mid - 1;
            }
        }
        return -1; // Should never occur in a valid mountain array
    }
};

int main() {
    vector<int> arr = {0, 2, 4, 7, 5, 3, 1};

    Solution obj;
    int peakIndex = obj.peakIndexInMountainArray(arr);
    cout << "Peak Index: " << peakIndex << endl;

    return 0;
}
