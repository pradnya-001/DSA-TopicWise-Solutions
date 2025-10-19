#include <iostream>
 using namespace std;

int main() {
    int n = 3;
     int num = 1;
    for (int i = 0; i < n; ++i) {
        // int num = 1;
        for (int j = 0; j < n; ++j) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}
