typedef int ItemType;
const int maxItems = 100;

    class stack
    {
    private:
        int size;
        ItemType* structure;
    public:
        stack();
        ~stack();
        bool isFull();
        bool isEmpty();
        void push(ItemType);
        ItemType pop();
        void print();
    };
