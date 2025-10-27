#include <iostream>
 using namespace std;

int main() {
    //Increment and Decrement Operations

    // int a = 10;
    // int* ptr = &a;
    // cout << ptr << endl;
    // ptr--;
    // cout << ptr << endl;

    // //Add and Sub
    // ptr = ptr + 2;
    // cout << ptr << endl;

// in cpp we are not allowed to add the two pointers(ptr1 + ptr2)
// but we are allowed to substract the one pointer value from another (ptr2 - ptr1) if the type of the two pointer is same

    int* ptr2; //100
    int* ptr1 = ptr2 + 2; //108
    cout << ptr1 - ptr2 << endl;

    // we can compare the two pointers
    return 0;
}
