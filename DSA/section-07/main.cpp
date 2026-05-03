#include <iostream>
#include "Array.h"

int main () {

    Array test {12};

    std::cout << test.length << std::endl;
    std::cout << test.size << std::endl;
    test.append(2);
    test.append(4);
    test.append(5);
    test.append(6);
    test.append(7);
    test.append(8);
    test.append(9);
    test.append(11);
    test.append(12);
    test.append(15);
    test.append(17);
    test.display();

    test.insert(1, 3);
    test.display();


    test.delete_index(1);
    test.append(23); 
    test.display();
    std::cout << test.length << std::endl;
    std::cout << test.size << std::endl;
    std::cout << test.index_of(4)<< std::endl;
    std::cout << test.binary_search(7);
    std::cout << test.binary_search(12);
    std::cout << test.binary_search(10);
    std::cout << test.get_max() << "\n";
    std::cout << test.get_min() << "\n";
    std::cout << test.get_sum() << "\n";
    // test.swap(0, 1);
    test.display();
    test.reverse();
    test.display();
    return 0;
}

