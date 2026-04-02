#include "Movies.h"

Movies::Movies(/* args */)
{
}

void Movies::display()
{
  if (this->movies_list.size() == 0)
  {
    std::cout << "Sorry, no movies to display\n";
    return;
  }

  for (auto movie : this->movies_list)
    movie.display();
}

bool Movies::add_movie(std::string name, std::string rating, int watched)
{
  for (auto movie : this->movies_list)
    if (movie.get_name() == name)
      return false;

  this->movies_list.push_back(Movie{name, rating, watched});
  return true;
}

//
bool Movies::increment_watched(std::string name)
{
  for (auto &movie : this->movies_list)
    if (movie.get_name() == name)
    {
      movie.increment_watched();
      return true;
    }
  return false;
};

Movies::~Movies()
{
}
