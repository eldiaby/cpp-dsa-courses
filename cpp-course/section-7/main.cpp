#include <iostream>
#include <vector>

int main() {
    std::vector<int> vector1;
    std::vector<int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    std::cout << "vector1 elements: "
              << vector1.at(0) << " "
              << vector1.at(1) << std::endl;
    std::cout << "vector1 size: " << vector1.size() << std::endl;
    std::cout << "============================================" << std::endl;

    vector2.push_back(100);
    vector2.push_back(200);

    std::cout << "vector2 elements: "
              << vector2.at(0) << " "
              << vector2.at(1) << std::endl;
    std::cout << "vector2 size: " << vector2.size() << std::endl;
    std::cout << "============================================" << std::endl;

    std::vector<std::vector<int>> vector2D;
    vector2D.push_back(vector1);
    vector2D.push_back(vector2);

    std::cout << "vector2D elements:" << std::endl;
    std::cout << vector2D.at(0).at(0) << " "
              << vector2D.at(0).at(1) << std::endl;
    std::cout << vector2D.at(1).at(0) << " "
              << vector2D.at(1).at(1) << std::endl;

    std::cout << "vector2D size: " << vector2D.size() << std::endl;
    std::cout << "============================================" << std::endl;

    vector1.at(0) = 1000;

    std::cout << "After modifying vector1:" << std::endl;
    std::cout << "vector1 elements: "
              << vector1.at(0) << " "
              << vector1.at(1) << std::endl;

    std::cout << "vector1 size: " << vector1.size() << std::endl;
    std::cout << "============================================" << std::endl;

    std::cout << "vector2D still contains:" << std::endl;
    std::cout << vector2D.at(0).at(0) << " "
              << vector2D.at(0).at(1) << std::endl;
    std::cout << vector2D.at(1).at(0) << " "
              << vector2D.at(1).at(1) << std::endl;

    std::cout << "This is the solution for section 7 challenge" << std::endl;

    return 0;
}
