#include <iostream>

using namespace std;

int main ( ) {
    int vet[5];
    vet[0] = 1;
    vet[10] = 4;
    
        for ( int i = 0; i < 11; i++)
    {
        cout << vet[i] << endl;
    }

    return 0;
}