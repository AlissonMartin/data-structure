#include <iostream>
#include "linked_list_queue.h"

using namespace std;

int main() {
    linked_list_queue queue1;
    ItemType item;
    int opt;

    do
    {
        cout << "0 para parar";
        cout << "1 para inserir";
        cout << "2 para remover";
        cout << "3 para imprimir";
        cin >> opt;

        if (opt == 1) {
            cout << "digite o numero a ser inserido";
            cin >> item;
            queue1.push(item);
        } else if (opt == 2) {
            item = queue1.pop();
            cout << item;
        } else if (opt == 3) {
            queue1.print();
        } else {
            system("pause");
        }
    } while (opt != 0);
    

    return 0;
}