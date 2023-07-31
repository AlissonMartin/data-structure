#include <iostream>
#include "stack.h"

using namespace std;

        stack::stack() {
            size = 0;
            structure = new ItemType[maxItems];
        }
        stack::~stack() {
            delete [] structure;
        }
        bool stack::isFull() {
            return (size == maxItems);
        }
        bool stack::isEmpty() {
            return (size == 0);
        }
        void stack::push(ItemType item) {
            if (isFull()) {
                cout << "Pilha cheia\n";
            } else {
                structure[size] = item;
                size++;
            }
        }
        ItemType stack::pop() {
            if (isEmpty()) {
                cout << "Pilha vazia\n";
            } else {
                structure[size -1];
                size--;
            }
        }
        void stack::print() {
            for (int i = 0; i < size; i++) {
                cout << structure[i] << " ";
            }
        }