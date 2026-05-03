#include <iostream>
#include "Diagonal.h"

int main()
{
Diagonal test{5};
test.set(1, 1);
test.set(2, 2);
test.set(3, 3);
test.set(4, 4);
test.set(5, 5);
test.display();
    return 0;
}
