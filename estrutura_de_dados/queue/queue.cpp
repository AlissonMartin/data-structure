#include <iostream>;
#include "queue.h"

using namespace std;

queue::queue()
{
    first = 0;
    last = 0;
    structure = new Itemtype[max_items];
}

queue::~queue()
{
    delete structure;
}

bool queue::isFull()
{
    return (last - first == max_items);
}

bool queue::isEmpty()
{
    return (first == last);
}

void queue::push(Itemtype item)
{
    if (isFull())
    {
        cout << "Fila cheia\n";
        return;
    }
    else
    {
        structure[last % max_items] = item;
        last++;
    }
}

Itemtype queue::pop()
{
    if (isEmpty())
    {
        cout << "Fila vazia\n";
        return;
    }
    else
    {
        first++;
        return structure[(first-1) % max_items];
        
    }
}

void queue::print()
{
    for (int i = first; i < last; i++) {
        cout << structure[i % max_items] << " "; 
    }
}
