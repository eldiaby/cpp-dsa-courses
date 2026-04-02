#pragma once

class Movie
{
private:
  /* data */
  std::string name;
  std::string rating;
  int watched;

public:
  Movie(const std::string name, const std::string rating, const int watched);

  //
  std::string get_name();

  std::string get_rating();

  //
  int get_watched();

  //
  void display();

  //

  void increment_watched();

  ~Movie();
};
