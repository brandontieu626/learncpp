#include <iostream>
#include <vector>
#include <cassert>

// Question #1 and #2
template <typename T>
void printArray(const std::vector<T>& arr)
{
    for (std::size_t index{ 0 }; index < arr.size(); ++index)
    {
        std::cout << arr[index] << ' ';
    }
}

template <typename T>
int findIndex(const std::vector<T>& arr, T val)
{
    for (std::size_t index{ 0 }; index < arr.size(); ++index)
    {
        if (arr[index] == val)
            return static_cast<int>(index);
    }

    return -1; // -1 is not a valid index, so we can use it as an error return value
}


template <typename T>
T getValidNumber(std::string_view prompt, T low, T high)
{
    // First, read in valid input from user
    T val{};
    do
    {
        std::cout << prompt;
        std::cin >> val;

        // if the user entered an invalid character
        if (!std::cin)
            std::cin.clear(); // reset any error flags

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any extra characters in the input buffer (regardless of whether we had an error or not)

    } while (val < low || val > high);

    return val;
}

template <typename T>
T findMax(const std::vector<T>& arr)
{
    std::size_t length{ arr.size() };

    if (length == 0)
        return T{};

    T max{ arr[0] }; // Set the max seen to the first element

    // Iterate through any remaining elements looking for a larger value
    for (std::size_t index{ 1 }; index < length; ++index)
    {
        if (arr[index] > max)
            max = arr[index];
    }

    return max;
}

void fizzbuzz(int count)
{
    // We'll make these static so we only have to do initialization once
    static const std::vector divisors{ 3, 5, 7, 11, 13, 17, 19 };
    static const std::vector<std::string_view> words{ "fizz", "buzz", "pop", "bang", "jazz", "pow", "boom" };
    assert(std::size(divisors) == std::size(words) && "fizzbuzz: array sizes don't match");

    // Loop through each number between 1 and count (inclusive)
    for (int i{ 1 }; i <= count; ++i)
    {
        bool printed{ false };

        // Check the current number against each possible divisor
        for (std::size_t j{ 0 }; j < divisors.size(); ++j)
        {
            if (i % divisors[j] == 0)
            {
                std::cout << words[j];
                printed = true;
            }
        }

        // If there were no divisors
        if (!printed)
            std::cout << i;

        std::cout << '\n';
    }
}

int main()
{
    std::vector arr{ 4.4, 6.6, 7.7, 3.3, 8.8, 2.2, 1.1, 9.9 };

    auto num{ getValidNumber("Enter a number between 1 and 9: ", 1.0, 9.0) };

    printArray(arr);

    int index{ findIndex(arr, num) };

    if (index != -1)
        std::cout << "The number " << num << " has index " << index << '\n';
    else
        std::cout << "The number " << num << " was not found\n";



    std::vector data1{ 84, 92, 76, 81, 56 };
    std::cout << findMax(data1) << '\n';

    std::vector data2{ -13.0, -26.7, -105.5, -14.8 };
    std::cout << findMax(data2) << '\n';

    std::vector<int> data3{ };
    std::cout << findMax(data3) << '\n';

    fizzbuzz(150);
    return 0;
}

