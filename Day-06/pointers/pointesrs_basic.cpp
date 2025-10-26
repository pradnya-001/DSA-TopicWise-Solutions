#include <iostream>
 using namespace std;

int main() {
//    int a=10;
//    int* ptr = &a; // pointer variable ptr holds the address of variable a
//    cout << &a << endl;  // prints the address of variable a
//    cout << ptr << endl; // prints the address stored in pointer variable ptr
//    cout << &ptr << endl; 


//    float price = 2.3456;
//    float* p = &price;
//    cout << "Address of price: " << &price << endl;
//    cout << "Address stored in pointer p: " << p << endl;
//    cout << "Address of pointer p: " << &p << endl;


//    //pointer to pointer concept
//     float** p2 = &p;
//     cout << "Address at pointer p2: " << p2 << endl;


//Dereferencing operator (*)
    int a = 10;
    int* p = &a;
    cout << *(p) << endl;
    cout << *(&a) << endl; // dereferencing the address of a

   
    return 0;
}
