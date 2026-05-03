struct Node
{
    /* data */
    int data;
    Node *next;
    Node(int item): data{item}, next{nullptr}{}
    // ~Node(){delete this->next;}
};