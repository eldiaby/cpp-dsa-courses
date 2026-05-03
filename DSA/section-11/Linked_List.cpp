#include <iostream>
#include "Linked_List.h"

Linked_List::Linked_List(/* args */) : head{nullptr}, last{nullptr}, size{0}
{
}

void Linked_List::add(int item)
{
    Node *temp = new Node{item};

    if (this->head == nullptr)
    {
        this->head = temp;
        this->last = temp;
    }
    else
    {
        this->last->next = temp;
        this->last = temp;
    }
    size += 1;
}

void Linked_List::remove(int item)
{
    if (head == nullptr)
        return;

    // لو العنصر في أول نود
    while (head != nullptr && head->data == item)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        size--;
    }

    Node *ptr = head;

    while (ptr != nullptr && ptr->next != nullptr)
    {
        if (ptr->next->data == item)
        {
            Node *temp = ptr->next;
            ptr->next = temp->next;

            // لو مسحنا آخر عنصر
            if (temp == last)
            {
                last = ptr;
            }

            delete temp;
            size--;
        }
        else
        {
            ptr = ptr->next;
        }
    }

    // لو الليست فاضية
    if (head == nullptr)
    {
        last = nullptr;
    }
}

void Linked_List::reverse()
{
    int temp_arr[this->size];
    Node *ptr{this->head};
    while (ptr != nullptr)
    {
        for (size_t i{0}; i < this->size; i++)
        {
            temp_arr[i] = ptr->data;
            ptr = ptr->next;
        }
        ptr = this->head;
        for (int i{this->size - 1}; i >= 0; i--)
        {
            ptr->data = temp_arr[i];
            ptr = ptr->next;
        }
    }
}

void Linked_List::display()
{
    Node *temp{head};
    while (temp != nullptr)
    {
        std::cout << temp->next << " addr is holding value: " << temp->data << std::endl;
        temp = temp->next;
    }
}

int Linked_List::get_size()
{
    return this->size;
}

int Linked_List::get_sum()
{
    int sum{head->data};
    Node *temp{head->next};
    while (temp != nullptr)
    {
        sum += temp->data;
        temp = temp->next;
    }
    return sum;
}

int Linked_List::get_max()
{
    int max{head->data};
    Node *temp{head->next};
    while (temp != nullptr)
    {
        if (temp->data > max)
            max = temp->data;
        temp = temp->next;
    }
    return max;
}

Node *Linked_List::search(int item)
{
    Node *temp{head};
    while (temp != nullptr)
    {
        if (temp->data == item)
            break;
        else
            temp = temp->next;
    }
    return temp;
};

Linked_List::~Linked_List()
{
    delete head;
    delete last;
}
