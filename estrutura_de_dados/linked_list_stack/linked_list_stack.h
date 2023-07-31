typedef int ItemType;

struct Node
{
    ItemType value;
    Node* next;
};


class linked_list_stack
{
private:
    Node* TopNode;
   
public:
    linked_list_stack();
    ~linked_list_stack();
    bool isEmpty();
    bool isFull();
    void push(ItemType item);
    ItemType pop();
    void print();
};


