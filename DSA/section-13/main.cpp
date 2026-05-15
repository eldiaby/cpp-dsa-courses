#include <iostream>

#include "Stack.h"

int main()
{
  Stack<int> test;
  std::cout << test.is_empty() << std::endl;
  test.push(5);
  std::cout << test.is_empty() << std::endl;
  std::cout << test.pop() << std::endl;
  // std::cout << test.pop() << std::endl;

  return 0;
}
