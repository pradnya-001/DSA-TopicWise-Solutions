#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long mergeCount(vector<int>& nums, int left, int mid, int right) {
        int n1 = mid - left + 1;
        int n2 = right - mid;

        vector<int> L(n1), R(n2);

        for (int i = 0; i < n1; i++) L[i] = nums[left + i];
        for (int j = 0; j < n2; j++) R[j] = nums[mid + 1 + j];

        long long invCount = 0;
        int i = 0, j = 0, k = left;

        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                nums[k++] = L[i++];
            } else {
                nums[k++] = R[j++];

                // All remaining elements in L[] are greater than R[j]
                invCount += (n1 - i);
            }
        }

        while (i < n1) nums[k++] = L[i++];
        while (j < n2) nums[k++] = R[j++];

        return invCount;
    }

    long long mergeSort(vector<int>& nums, int left, int right) {
        if (left >= right) return 0;

        int mid = left + (right - left) / 2;

        long long inv = 0;
        inv += mergeSort(nums, left, mid);
        inv += mergeSort(nums, mid + 1, right);
        inv += mergeCount(nums, left, mid, right);

        return inv;
    }

    long long countInversions(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size() - 1);
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
    long long result = obj.countInversions(nums);

    cout << "Total Inversions = " << result << endl;

    return 0;
}
