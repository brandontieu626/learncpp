#include <iostream>

int main()
{
    // Question #1: Determine what values the following program prints 
    // by yourself (do not compile the program).
    int x{ 1 };
    int& ref{ x };

    std::cout << x << ref << '\n'; // 11

    int y{ 2 };
    ref = y; //This sets what ref is referencing = to y
    y = 3;

    std::cout << x << ref << '\n'; // 22

    x = 4;

    std::cout << x << ref << '\n'; // 44

    return 0;
}