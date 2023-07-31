#include <iostream>
#include "linked_list_stack.h"
#include <cstddef>

using namespace std;


    linked_list_stack::linked_list_stack(/* args */) {
        TopNode = NULL;
    }

    linked_list_stack::~linked_list_stack() {
        Node* TempNode;
        if (TopNode != NULL) {
            TempNode = TopNode;
            TopNode = TopNode->next;
            delete TempNode;
        }
    }

    bool linked_list_stack::isEmpty() {
        return (TopNode == NULL);
    }

    bool linked_list_stack::isFull() {
        Node* NewNode;

        try {
            NewNode = new Node;
            delete NewNode;
            return false;
        }catch(bad_alloc exception) {
            return true;
        }
    }

    void linked_list_stack::push(ItemType item) {
        if (isFull()) {
            cout << "Memória cheia\n";
        } else {
            Node* NewNode = new Node;
            NewNode->value = item;
            NewNode->next = TopNode;
            TopNode = NewNode;
        }
    }

    ItemType linked_list_stack::pop() {
        if (isEmpty()) {
            cout << "Pilha vazia";
            return 0;
        } else {
            Node* TempNode;
            TempNode = TopNode;
            ItemType item = TopNode->value;
            TopNode = TopNode->next;
            delete TempNode;
            return item;
        }
    }

    void linked_list_stack::print() {
        Node* TempNode = TopNode;
        if (TempNode->next != NULL) {
            cout << TempNode->value;
            TempNode = TempNode->next;
        }
    }