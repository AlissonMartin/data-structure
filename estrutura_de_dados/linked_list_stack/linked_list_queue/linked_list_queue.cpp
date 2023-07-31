#include <iostream>
#include "linked_list_queue.h"
#include <cstddef>

using namespace std;


    linked_list_queue::linked_list_queue() {
        lastNode = NULL;
        firstNode = NULL;
    }

    linked_list_queue::~linked_list_queue() {
        Node* TempNode;
        if (firstNode != NULL) {
            TempNode = firstNode;
            firstNode = firstNode->next;
            delete TempNode;
        }
        lastNode = NULL;
    }

    bool linked_list_queue::isEmpty() {
        return (lastNode == NULL);
    }

    bool linked_list_queue::isFull() {
        Node* NewNode;

        try {
            NewNode = new Node;
            delete NewNode;
            return false;
        }catch(bad_alloc exception) {
            return true;
        }
    }

    void linked_list_queue::push(ItemType item) {
        if (isFull()) {
            cout << "Memória cheia\n";
        } else {
            Node* NewNode = new Node;
            NewNode->value = item;
            NewNode->next = NULL;
            if (firstNode == NULL) {
                firstNode = NewNode;
            } else {
                lastNode->next = NewNode;
            }
            lastNode = NewNode;
        }
    }

    ItemType linked_list_queue::pop() {
        if (isEmpty()) {
            cout << "Fila vazia";
            return 0;
        } else {
            Node* TempNode;
            ItemType item = firstNode->value;
            firstNode = firstNode->next;
            if (firstNode == NULL) {
                lastNode = NULL;
            }
            delete TempNode;
            return item;
        }
    }

    void linked_list_queue::print() {
        Node* TempNode = firstNode;
        if (TempNode->next != NULL) {
            cout << TempNode->value;
            TempNode = TempNode->next;
            print();
        }
    }