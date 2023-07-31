#include <iostream>

using namespace std;

int main () {
    int a;
    int* pointer1;

    a = 5;
    pointer1 = &a;

    cout << a << endl;
    cout << pointer1 << endl;
    cout << *pointer1 << endl;


    a = 10;
    pointer1 = &a;

    cout << a << endl;
    cout << pointer1 << endl;
    cout << *pointer1 << endl;


    return 0;
}