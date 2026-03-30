#include <iostream>

namespace constants
{
    constexpr double pi{ 3.14159 };
}

using Degrees = double;
using Radians = double;

double convertToRadians(Degrees degrees)
{
    return degrees * constants::pi / 180;
}
int main()
{
    // Question #1: What type of conversion happens at each one?
    //int a{ 5 }; // 1a No conversion
    //int b{ 'a' }; // 1b Numeric promotion
    //int c{ 5.4 }; // 1c Won't compile due to narrowing conversion
    //int d{ true }; // 1d Numeric promotion
    //int e{ static_cast<int>(5.4) }; // 1e Numeric conversion

    //double f{ 5.0f }; // 1f Numeric promotion
    //double g{ 5 }; // 1g Numeric conversion

    //// Extra credit section
    //long h{ 5 }; // 1h Numeric conversion

    //float i{ f }; // 1i (uses previously defined variable f) Won't compile due to narrowing conversion
    //float j{ 5.0 }; // 1j  Numeric conversion

    // Question #2 
    // Update the following program to use type aliases 
    // for degrees and radians values
    //std::cout << "Enter a number of degrees: ";
    //Degrees degrees{};
    //std::cin >> degrees;

    //Radians radians{ convertToRadians(degrees) };
    //std::cout << degrees << " degrees is " << radians << " radians.\n";

    ////Question #2b: Will this compile?
    //radians = degrees; //Yes, the type alias is just a substitute so double = double;

    return 0;

}

