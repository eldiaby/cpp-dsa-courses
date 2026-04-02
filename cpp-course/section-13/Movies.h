#pragma once

#include <iostream>
#include <vector>

#include "Movie.h"

class Movies
{
private:
  /* data */
  std::vector<Movie> movies_list;

public:
  Movies(/* args */);

  //
  void display();

  //
  bool add_movie(std::string, std::string, int);

  //
  bool increment_watched(std::string);

  ~Movies();
};
