#include <iostream>
 using namespace std;

int main() {
   int a=10;
   int* ptr = &a; // pointer variable ptr holds the address of variable a
   cout << &a << endl;  // prints the address of variable a
   cout << ptr << endl; // prints the address stored in pointer variable ptr
    return 0;
}
