#include <iostream>
 using namespace std;

int main() {
     int arr[] = {10, 20, 30, 40, 50};
     cout << "Array elements using pointer arithmetic:" << endl;
     cout << *(arr) << endl; // pointer to first element
        cout << *(arr + 1) << endl; // pointer to second element
        cout << *(arr + 2) << endl; // pointer to third element
        cout << *(arr + 3) << endl; // pointer to fourth element
        cout << *(arr + 4) << endl; // pointer to fifth element
    return 0;
}
