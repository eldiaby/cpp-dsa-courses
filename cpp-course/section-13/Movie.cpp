#include <iostream>

#include "Movie.h"

Movie::Movie(const std::string name, const std::string rating, const int watched) : name{name}, rating{rating}, watched{watched}
{
}

//
std::string Movie::get_name() { return this->name; };

//
std::string Movie::get_rating() { return this->rating; };

//
int Movie::get_watched() { return this->watched; };

void Movie::display()
{
  std::cout << this->name << ": " << this->rating << " has been watched " << this->watched << " times\n";
}

//
void Movie::increment_watched()
{
  std::cout << this->watched;
  this->watched = this->watched + 1;
  std::cout << this->watched;
};

Movie::~Movie()
{
}
