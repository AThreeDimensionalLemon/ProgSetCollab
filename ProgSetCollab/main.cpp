#include <iostream>
#include <array>
#include <limits>
#include "MySet.h"

int main() {
    std::cout << "Eisig Liang - 23 Feb. 2025\n";

    int max = std::numeric_limits<int>::max();
    std::array<int, 20> arrayA{ 1, 3, 5, 8, 9, 11, 13, 15, 17, 19, max, max, max, max, max, max, max, max, max, max };
    std::array<int, 20> arrayB{ 0, 2, 4, 6, 8, 9, 12, 14, 16, 18, max, max, max, max, max, max, max, max, max, max };

    mySet A(arrayA);
    mySet B(arrayB);

    mySet C(A.Union(B));
    mySet D(A.Intersection(B));

    C.printAll();
    std::cout << std::endl;
    D.printAll();
}