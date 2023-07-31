typedef int ItemType;

struct Node
{
    ItemType value;
    Node* next;
};


class linked_list_queue
{
private:
    Node* firstNode;
    Node* lastNode;
   
public:
    linked_list_queue();
    ~linked_list_queue();
    bool isEmpty();
    bool isFull();
    void push(ItemType item);
    ItemType pop();
    void print();
};


