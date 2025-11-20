#include <iostream>
 using namespace std;
 //what is recursion?
 //Recursion is a programming technique where a function calls itself to solve a smaller instance of the same problem.


 //This is the example of the infinite recursion or non terminating recursion

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
