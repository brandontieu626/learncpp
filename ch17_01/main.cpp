#include <array>
#include <iostream>

// Question #1
// What type of initialization does std::array use?
// A: aggregate initialization

// Why should you explicitly value-initialize a std::array if you are not providing initialization values?
// A: It will default initialize members if no initializers are provided, so they will be junk values.

int main()
{

    // Question #2
    // Define a std::array that will hold the high temperature for each day of the year (to the nearest tenth of a degree). 
    std::array<double, 365> temps{};

    // Question #3
    // Initialize a std::array with the following values: ‘h’, ‘e’, ‘l’, ‘l’, ‘o’. Print the value of the element with index 1.
    constexpr std::array print{ 'h','e','l','l','o' };

    std::cout << print[1];

    return 0;
}