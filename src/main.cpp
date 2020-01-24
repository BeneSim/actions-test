#include "point.hpp"

#include <iostream>

int main() {
    const auto point1 = Point<int>(3, 4);
    const auto point2 = Point<int>(5, 6);

    const auto point3 = point1 + point2;

    std::cout << point3 << std::endl;

    return 0;
}
