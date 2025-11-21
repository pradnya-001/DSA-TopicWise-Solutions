#include <iostream>
using namespace std;

void print(int i, int n){
    if(i < 1){        // base case: stop when i reaches 0
        return;
    }

    cout << i << " "; // THEN print while backtracking
    print(i - 1, n);  // FIRST go deep (i=5→4→3→2→1→0)

}

int main() {
    int n;
    cin >> n;

    print(n, n);
    return 0;
}
