// Linked-list

#include <iostream>
#include "Linked_List.h"

int main()
{
    Linked_List test;
    test.add(1);
    test.add(2);
    test.add(3);
    test.add(4);
    test.add(5);
    test.remove(3);
    test.reverse();
    // std::cout << test.get_size() << std::endl;
    test.display();
    // std::cout << test.get_sum() << std::endl;
    // std::cout << test.get_max() << std::endl;
    // Node *temp = test.search(10);
    // if(temp != nullptr)
    //     std::cout << temp->data << std::endl;
    return 0;
}
