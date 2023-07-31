typedef int Itemtype;

const int max_items = 15;

class queue {
    private:
    int first, last;
    Itemtype* structure;

    public:
    queue();
    ~queue();
    bool isFull();
    bool isEmpty();
    void push(Itemtype item);
    Itemtype pop();
    void print();
};