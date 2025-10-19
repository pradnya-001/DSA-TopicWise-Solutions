#include <iostream>
 using namespace std;

int main() {
     int marks[] = {10, 20, 30, 40, 50};
     int size = sizeof(marks) ;
     for(int i = 1 ; i<size;i++){
        cout << marks[i];
     }
    return 0;
}
