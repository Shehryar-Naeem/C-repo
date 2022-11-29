#include <iostream>
#include <array>

int main()
{
    std::array<int, 5> first {5,9,8,7,4};
    std::array<int, 5> second {45,67,89,67,90};

    if (first == second) {
        std::cout << "Both arrays are equal";
    } else {
        std::cout << "Both arrays are not equal";
    }

    return 0;





}
