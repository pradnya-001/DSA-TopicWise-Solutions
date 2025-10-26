#include <iostream>
 using namespace std;

 void change(int &b){ //Pass By Reference
    b = 20;
 }

int main() {
    int a =10;
    cout << "before function call:" << a << endl;
    change(a);
    cout <<"after function call:" << a << endl;
    return 0;
}
