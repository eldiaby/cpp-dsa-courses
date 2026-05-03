#include "String.h"

String::String(): length {7}, ptr{new char[] {"welcome"}}
{
}

int String::get_length() {
int length {0};
while (this->ptr[length] != '\0'){length ++;/* code */}
return length;
}

char * String::get_upper_case() {
    int i{0};
    char *upper_case{new char[7]};
    for( i; this->ptr[i] != '\0'; i++)
        upper_case [i] = this->ptr[i];
    upper_case[i] = '\0';
    return upper_case;
}

String::~String(){
delete [] this->ptr;
}