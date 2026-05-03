// Strings
#include <iostream>

#include "String.h"


int main()
{
String greet{};
std::cout << greet.get_length() << std::endl;
const char *upper_case = greet.get_upper_case();
    for( int i{0}; upper_case[i] != '\0'; i++)
        std::cout << upper_case[i];
    return 0;
}
