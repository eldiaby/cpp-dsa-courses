#include <iostream>


int main() {
int *arr_ptr{new int [2] {0}};

*(arr_ptr + 3) = 6;

for(size_t i =0; i < 10; i++)   
    std::cout << * (arr_ptr + i) << std::endl; 

delete [] arr_ptr;
    return 0;
}