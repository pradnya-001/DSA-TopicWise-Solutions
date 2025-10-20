#include <iostream>
 using namespace std;
 int linearSearch(int arr[] , int n , int target){

    for(int i = 0 ;i < n ; i++ ){
        if(arr[i] == target){
            return i;
    }
    }
    return -1;
    }

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int target = 30;
    cout << linearSearch(arr,n,target) <<endl;

    return 0;
}
