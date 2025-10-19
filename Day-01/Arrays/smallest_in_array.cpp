#include <iostream>
 using namespace std;

int main() {
     int arr[] = {2,4,5,6,7,9,44,55};
     int smallest = INT_MAX;
     int size  = sizeof(arr)/sizeof(int);
     for(int i = 0; i< size; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }


     }
     cout << "Smallest is:" << smallest << endl;
    return 0;
}
