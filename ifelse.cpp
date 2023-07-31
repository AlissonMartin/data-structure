#include <iostream>

using namespace std;

int main() {
    float salary;
    int age;
    cout << "digita legal seu salario\n";
    cin >> salary;

    cout << "fala sua idade";
    cin >> age;

    if (salary > 1200 || age > 40) {
        cout << "voce e rico ou véi ta preso";
    } else {
        cout << "voce e pobre tmj";
    }
}