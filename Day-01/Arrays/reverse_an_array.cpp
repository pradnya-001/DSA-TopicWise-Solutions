#include <iostream>
 using namespace std;

 void reverseArray(int arr[],int n){
    int start = 0,end = n-1;
    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
 }

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    reverseArray(arr ,n);

    for(int i = 0; i< n ;i++){
        cout << arr[i] <<" ";
    }
    cout << endl;

    return 0;
}
