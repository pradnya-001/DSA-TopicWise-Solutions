#include <iostream>
#include <vector>
 using namespace std;

int main() {
    vector<int> vec = {10, 20, 30, 40, 50};
    for(int i : vec) {
        cout << i << endl;
    }
    return 0;
}
