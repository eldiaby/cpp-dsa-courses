#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node(int val) : data{val}, next{nullptr} {}
};

class Queue
{
private:
  Node *front;
  Node *rear;

public:
  Queue() : front{nullptr}, rear{nullptr} {}

  void enqueue(int val)
  {
    Node *newNode = new Node(val);

    if (rear == nullptr)
    {
      front = rear = newNode;
      return;
    }

    rear->next = newNode;
    rear = newNode;
  }

  void dequeue()
  {
    if (front == nullptr)
    {
      cout << "Queue Underflow\n";
      return;
    }

    Node *temp = front;
    front = front->next;

    if (front == nullptr)
      rear = nullptr;

    delete temp;
  }

  int Front()
  {
    if (front == nullptr)
    {
      cout << "Queue Empty\n";
      return -1;
    }

    return front->data;
  }

  bool empty()
  {
    return front == nullptr;
  }

  void display()
  {
    Node *temp = front;

    while (temp != nullptr)
    {
      cout << temp->data << " ";
      temp = temp->next;
    }

    cout << endl;
  }
};

int main()
{
  Queue q;

  q.enqueue(10);
  q.enqueue(20);
  q.enqueue(30);

  q.display();

  q.dequeue();

  q.display();

  cout << q.Front() << endl;

  return 0;
}