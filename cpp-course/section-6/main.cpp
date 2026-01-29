#include <iostream>

int main() {
  const float small_room_price {25.0};
  const float large_room_price {30.0};
  const float tax_rate {0.06};
  const short estimate_valid_days {30}; // in Days

  std::cout << "Hello, welcome to Frank's Cleaning Services" << std::endl;

  std::cout << "\nPlease enter how many small rooms you would like to clean: ";
  int small_rooms{0};
  std::cin >> small_rooms;
  
  std::cout << "Please enter how many large rooms you would like to clean: ";
  int large_rooms{0};
  std::cin >> large_rooms;

  std::cout << "\nNumber of small rooms: " << small_rooms << std::endl;
  std::cout << "Number of large rooms: " << large_rooms << std::endl;

  std::cout << "\nPrice for small rooms: $" << small_room_price << std::endl;
  std::cout << "Price for large rooms: $" << large_room_price << std::endl;

  const float cost{(small_room_price * small_rooms) + (large_room_price * large_rooms)};

  std::cout << "\nCost: $" << cost << std::endl;

  const float tax {cost * tax_rate};
  std::cout << "Tax: $" << tax << std::endl;
  std::cout << "==================================================" << std::endl;

  const float total_estimate {cost + tax};
  std::cout << "Total estimate: $" << total_estimate << std::endl;

  std::cout << "This estimate is valid for " << estimate_valid_days << " days" << std::endl;
}
