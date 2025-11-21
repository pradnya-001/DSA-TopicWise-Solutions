#include <iostream>
using namespace std;

// The base condition (or base case) is where the recursion stops.

// Program to print the series of numbers from 0 to 10 using recursion.
void count(int cnt) {
    // Base Condition: Stop when cnt is greater than 10 (i.e., stop after printing 10).
    if (cnt > 10) {
        return; 
    }

    // Recursive Step:
    count(cnt + 1); 
    cout << cnt << " "; // 1. Print the current number
    
    // Increment the counter for the next function call
    // The incremented value is passed to the next recursive call.

    // Note: If you wanted to print the numbers in reverse order (10 to 0),
    // you would place the 'cout' statement after the recursive call: count(cnt+1);
};

int main() {
    int start_cnt = 0;
    count(start_cnt);
    cout << endl; // For a clean output
    return 0;
}