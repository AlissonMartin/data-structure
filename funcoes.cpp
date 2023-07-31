#include <iostream>

using namespace std;

void teste(string a) {
    cout << "chamou antes?\n";
    cout << "testando " << a << endl;
}

int main() {
    cout << "main aq\n";
    
    string texto = "a nao sei oque não sei o que la\n";

    teste(texto);

    return 0;
}