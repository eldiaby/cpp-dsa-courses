#include "Node.h"

class Linked_List
{
private:
    /* data */
    Node *head;
    Node *last;
    size_t size;

public:
    Linked_List(/* args */);
    void add(int);
    void remove(int);
    void reverse();
    void display();
    int get_size();
    int get_sum();
    int get_max();
    Node *search(int);
    ~Linked_List();
};
