#include <iostream>
 using namespace std;

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
