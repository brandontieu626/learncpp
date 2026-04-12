#include <iostream>

int main()
{
    // Question #1
    // True or false. Enumerators can be:
    // Given an integer value: True
    // Given no explicit value: True
    // Given a floating point value: False
    // Given a negative value: True
    // Given a non-unique value: True
    // Given the value of a prior enumerator (e.g. magenta = red): True
    // Given a non-constexpr value: False (enums are implicitly constexpr)
    std::cout << "Hello World!\n";
}

