#include <iostream>
#include <vector>
 using namespace std;

int main() {
    vector <char> alpha = {'a','b','c','d'};
    // int size = alpha.size();
    // cout << "size of vector is:" << size << endl;

    //Insertion in the vector
    alpha.push_back('e');
    //deleting the vector element
    alpha.pop_back();
    //calculating the size of the vector
    int size = alpha.size();
    cout << "size of vector is:" << size << endl;

    for(char val :alpha){
        cout << val << endl;
    }

      cout << "first element of the vector:" << alpha.front() << endl;

    return 0;
}
