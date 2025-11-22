#include <iostream>
using namespace std;

void currentSum(int n, int s){   // ← changed 'sum' to 's'
    if(n < 0){
        cout << s << endl;
        return;
    }
    currentSum(n - 1, s + n);
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    currentSum(n, 0);
    return 0;
}
