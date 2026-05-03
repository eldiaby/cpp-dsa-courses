#include <iostream>

#include "Diagonal.h"


Diagonal::Diagonal(int init_length): length{init_length}, ptr{new int[init_length]}
{
}

    void Diagonal::set(int index, int item) {
this->ptr[index - 1] = item;
    };

    int Diagonal::get(int first_index, int second_index) {
        if(first_index == second_index)
            return this->ptr[first_index - 1];
        return 0;
    }

    void Diagonal::display() {
        for(int i{0}; i < this->length; i++){
            for(int j{0}; j < this->length; j++){
                if(j==i)
                std::cout<< this->ptr[j] << " ";
                else std::cout << "0 ";
            }
            std::cout << "\n";
        }
    }

Diagonal::~Diagonal()
{
    delete [] this->ptr;
}