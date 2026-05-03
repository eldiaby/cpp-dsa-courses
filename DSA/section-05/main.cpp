// Recursion
#include <iostream>

void fun(const int x ) {
    if(x > 0){
        std::cout << x << std::endl;
        fun(x-1);
    }
}

int main()
{
    fun(3);
    return 0;
}
