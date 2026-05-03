#include <iostream>
#include "Array.h"

Array::Array(int init_size): size {init_size}, ptr {new int [init_size-1] {}}, length {0}{
    // for(int i =0; i < init_size; i++)
    //     *(this->ptr + i) = 0;

}

void Array::display() const {
    std::cout << "\n [ ";
    for(int i = 0; i < this->length; i++)
        if(i == this->length -1) std::cout <<this->ptr[i] << " ]\n";
        else  std::cout << this->ptr[i] <<", ";
}

void Array::append(const int item) {
    // *(this->ptr + this->length) = item;
    // this->length++;
    this->ptr[this->length++] = item;
}


    void Array::insert(const int index, const int item) {
        for(int i = this->length + 1; i > index; i--)
            this->ptr [i] = this->ptr [i-1];

        this->ptr[index] = item;
        this->length++;
    }
    void Array::delete_index(const int index) {
        for(int i = index; i < this->length - 1; i++)
            this->ptr[i] = this->ptr[i+1];
        this->length--;
    };

    int Array::index_of(const int item) const {
        for(ssize_t i{0}; i < this->length - 1; i++)
            if(this->ptr[i] == item)
                return i;
        return -1;
    }

    int Array::binary_search(const int item) const {
        int left_index {0};
        int right_index {this->length - 1};
        while ( left_index <= right_index)
        {
            const int middle =  left_index + (right_index - left_index) / 2;

            if(this->ptr[middle] == item) return middle;
            else if (this->ptr[middle] > item) right_index = middle - 1;
            else if (this->ptr[middle] < item) left_index = middle + 1;
        }
        return -1;
    };


    int Array::get_max()const {
        int max = this->ptr[0];
        for(int i {1}; i < this->length; i++)
            if(this->ptr[i] > max)
                max = this->ptr[i];
        return max;
    } ;


    int Array::get_min()const {
        int min = this->ptr[0];
        for(int i {1}; i < this->length; i++)
            if(this->ptr[i] < min)
                min = this->ptr[i];
        return min;
    } ;

int Array::get_sum()const  {
    int sum {this->ptr[0]};

    for (int i {1}; i < this->length; i++)
        sum += this->ptr[i];
    return sum;
}

    void Array::swap(int first_index, int second_index) {
const int temp = this->ptr[first_index];
this->ptr[first_index] = this->ptr[second_index];
this->ptr[second_index] = temp;
    };


    void Array::reverse() {
        for(int i {0}, j {this->length - 1}; i < j; i++, j--)
            this->swap(i, j);
    };


Array::~Array(){delete [] this->ptr;}