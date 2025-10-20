#include <iostream>
 using namespace std;


 int changeArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = 5* arr[i]; 
    }
    return 0;}
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

for(int i = 0; i < size; i++) {
        cout << "Before change arr[" << i << "]  = " << arr[i] << endl;
    }
    cout << "------------------------" << endl;

   changeArray(arr, size);
   for(int i = 0; i < size; i++) {
        cout << "After change arr[" << i << "]  = " << arr[i] << endl;
    }   
    cout << "------------------------" << endl;
    return 0;
}
