#include <iostream>
 using namespace std;

 void printNameNTimes( int i , int n) {
    // Base Condition
    if (i > n) {
        return;
    }
    // Print the name
    printNameNTimes(i+1, n);
    cout << "Pradnya" << endl;
    // Recursive Call
 }


int main() {
    int n;
    cin >> n;
    printNameNTimes( 1 , n);
    return 0;
}
