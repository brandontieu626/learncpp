#include <iostream>
#include <vector>
// Question #1
// Define a std::vector using CTAD and 
// initialize it with the first 5 positive square numbers (1, 4, 9, 16, and 25).
int main()
{
    // Question #1
    // Define a std::vector using CTAD and 
    // initialize it with the first 5 positive square numbers (1, 4, 9, 16, and 25).
    std::vector squares{ 1,4,9,16,25 };

    // Question #2
    // What’s the behavioral difference between these two definitions ?
    // A: v1 is a vector with 1 element being 5, v2 is an empty vector of 5 int elements
    std::vector<int> v1{ 5 };
    std::vector<int> v2(5);

    // Question #3
    // Define a std::vector (using an explicit template type argument) to hold the high temperature 
    // (to the nearest tenth of a degree) for each day of a year (assume 365 days in a year).

    std::vector<double> highTemps(365);

    // Question #4
    // Using a std::vector, write a program that asks the user to enter 3 integral values.
    // Print the sum and product of those values.
    std::vector<int> arr(3);

    std::cout << "Enter 3 integers: ";
    std::cin >> arr[0] >> arr[1] >> arr[2];

    std::cout << "The sum is: " << arr[0] + arr[1] + arr[2] << '\n';
    std::cout << "The product is: " << arr[0] * arr[1] * arr[2] << '\n';


    std::cout << "Hello World!\n";
}

