#pragma once

// Stack with  Array
// #include <stdexcept>

// template <class T>
// class Stack
// {
// private:
//   std::size_t size;
//   int top;
//   T *data;

// public:
//   Stack(std::size_t s) : size{s}, top{-1}, data{new T[s]} {}

//   ~Stack()
//   {
//     delete[] data;
//   }

//   void push(T value)
//   {
//     if (!is_full())
//     {
//       data[++top] = value;
//     }
//   }

//   T pop()
//   {
//     if (is_empty())
//       throw std::out_of_range("Stack is empty");

//     return data[top--];
//   }

//   bool is_full() const
//   {
//     return top == static_cast<int>(size) - 1;
//   }

//   bool is_empty() const
//   {
//     return top == -1;
//   }

//   Stack(const Stack &) = delete;
//   Stack &operator=(const Stack &) = delete;
// };

// Stack with  Linked list

template <class T>
struct Node
{
  T data;
  Node<T> *next;
};

template <class T>
class Stack
{
private:
  Node<T> *top;

public:
  Stack();

  void push(T input)
  {
    Node<T> *inputNode = new Node<T>{input, this->top};

    top = inputNode;
  }

  T pop()
  {
    if (this->is_empty())
    {
      throw std::out_of_range("Stack is empty");
    }

    T temp_data = this->top->data;

    Node<T> *temp_next = this->top;

    this->top = this->top->next;
    delete temp_next;

    return temp_data;
  }

  bool is_empty()
  {
    return this->top == nullptr;
  }

  T peek()
  {
    if (this->is_empty())
    {
      throw std::out_of_range("Stack is empty");
    }

    return this->top->data;
  }

  ~Stack();
};

template <class T>
Stack<T>::Stack() : top{nullptr}
{
}

template <class T>
Stack<T>::~Stack()
{
  while (top != nullptr)
  {
    Node<T> *temp = top;
    top = top->next;

    delete temp;
  }
}