#include <iostream>
#include <climits>    // for INT_MIN
#include <algorithm>  // for max()
using namespace std;

int main() {
    int marks[5] = {85, 90, 78, 92, 88};
    int largest = INT_MIN;

    // ✅ Correct way to calculate the number of elements
    int size = sizeof(marks) / sizeof(marks[0]);

    for (int i = 0; i < size; i++) {
        largest = max(largest, marks[i]);
    }

    cout << "Largest is: " << largest << endl;
    return 0;
}
