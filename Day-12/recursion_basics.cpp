#include <iostream>
 using namespace std;
 //what is recursion?
 //Recursion is a programming technique where a function calls itself to solve a smaller instance of the same problem.
//in simple words function calling itself until a certain condition is met.

//Types of recursion
//1. Direct Recursion: A function calls itself directly.
//2. Indirect Recursion: A function calls another function, which in turn calls the first function.

 //This is the example of the infinite recursion or non terminating recursion
// infinite recursion leads to the stack overflow ie, segmentation fault.
 void printMessages(){
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Welcome to C++ programming." << std::endl;
    std::cout << "Recursion is a powerful concept." << std::endl;

    printMessages();
 };

int main() {
    cout << "hello";
    printMessages();
    return 0;
}
