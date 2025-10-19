#include <iostream>
 using namespace std;

int main() {
    //  int marks[] = {10, 20, 30, 40, 50};
    //  int size = sizeof(marks)/ sizeof(int) ;
    //  for(int i = 0 ; i<size;i++){
    //     cout << marks[i] << endl;
    //  }

    int marks[5];
    int size = 5;
    for(int i = 0;i <size;i++){
        cin >> marks[i];
    }
    

    for(int i = 0;i<size;i++){
        cout << marks[i] << endl;
    }
    return 0;
}
