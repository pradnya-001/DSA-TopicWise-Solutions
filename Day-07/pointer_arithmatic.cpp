#include <iostream>
 using namespace std;

int main() {
    //Increment and Decrement Operations

    int a = 10;
    int* ptr = &a;
    cout << ptr << endl;
    ptr--;
    cout << ptr << endl;

    //Add and Sub
    ptr = ptr + 2;
    cout << ptr << endl;
    return 0;
}
