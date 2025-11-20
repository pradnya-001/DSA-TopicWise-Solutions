#include <iostream>
 using namespace std;
 void printNameNTimes(int n) {
    // Base Condition
    if (n <= 0) {
        return;
    }

    // Print the name
    cout << "Pradnya" << endl;

    // Recursive Call
    printNameNTimes(n - 1);
 }


int main() {
    int n;
    cin >> n;
    printNameNTimes(n);
    return 0;
}
