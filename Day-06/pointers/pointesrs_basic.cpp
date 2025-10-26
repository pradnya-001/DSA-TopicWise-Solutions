#include <iostream>
using namespace std;

int main() {
   int a = 10;
   int* ptr = &a; // pointer variable ptr holds the address of variable a

   cout << &a << endl;   // prints the address of variable a
   cout << ptr << endl;  // prints the address stored in pointer variable ptr
   cout << &ptr << endl; // prints the address of pointer ptr

   float price = 2.3456;
   float* p = &price;
   cout << "Address of price: " << &price << endl;
   cout << "Address stored in pointer p: " << p << endl;
   cout << "Address of pointer p: " << &p << endl;

   // Pointer to pointer concept
   float** p2 = &p;
   cout << "Value stored in pointer p2 (address of p): " << p2 << endl;

   // Dereferencing operator (*)
   int b = 100;
   int* p3 = &b;
   int** p4 = &p3;

   cout << *p3 << endl;     // prints 100
   cout << *(&b) << endl;   // prints 100
   cout << **p4 << endl;    // prints 100

   // NULL Pointer
   int* nullPtr = NULL;
   cout << nullPtr << endl; // prints 0 or NULL address

   return 0;
}
