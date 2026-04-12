#include <iostream>

// Question #1
// You are running a website, and you are trying to calculate your advertising revenue. 
// Write a program that allows you to enter 3 pieces of data:
// How many ads were watched.
// What percentage of users clicked on an ad.
// The average earnings per clicked ad.
// Store those 3 values in a struct.Pass that struct to another function that prints each of the values.
// The print function should also print how much you made for that day(multiply the 3 fields together).

struct Advertising
{
    int adsShown{};
    double clickThroughRatePercentage{};
    double averageEarningsPerClick{};
};

Advertising getAdvertising()
{
    Advertising temp{};
    std::cout << "How many ads were shown today? ";
    std::cin >> temp.adsShown;
    std::cout << "What percentage of ads were clicked on by users? ";
    std::cin >> temp.clickThroughRatePercentage;
    std::cout << "What was the average earnings per click? ";
    std::cin >> temp.averageEarningsPerClick;

    return temp;
}

void printAdvertising(const Advertising& ad)
{
    std::cout << "Number of ads shown: " << ad.adsShown << '\n';
    std::cout << "Click through rate: " << ad.clickThroughRatePercentage << '\n';
    std::cout << "Average earnings per click: $" << ad.averageEarningsPerClick << '\n';

    // The following line is split up to reduce the length
    // We need to divide ad.clickThroughRatePercentage by 100 because it's a percent of 100, not a multiplier
    std::cout << "Total Earnings: $"
        << (ad.adsShown * ad.clickThroughRatePercentage / 100 * ad.averageEarningsPerClick) << '\n';
}

// Question #2
struct Fraction
{
    int numerator{ 0 };
    int denominator{ 1 };
};

Fraction getFraction()
{
    Fraction temp{};
    std::cout << "Enter a value for numerator: ";
    std::cin >> temp.numerator;
    std::cout << "Enter a value for denominator: ";
    std::cin >> temp.denominator;
    std::cout << '\n';

    return temp;
}

constexpr Fraction multiply(const Fraction& f1, const Fraction& f2)
{
    return { f1.numerator * f2.numerator, f1.denominator * f2.denominator };
}

void printFraction(const Fraction& f)
{
    std::cout << f.numerator << '/' << f.denominator << '\n';
}
int main()
{
    // Declare an Advertising struct variable
    Advertising ad{ getAdvertising() };
    printAdvertising(ad);

    Fraction f1{ getFraction() };
    Fraction f2{ getFraction() };

    std::cout << "Your fractions multiplied together: ";

    printFraction(multiply(f1, f2));

    return 0;
}

// Question #3 
// In the solution to the prior quiz question
// , why does getFraction() return by value instead of by reference?
// A: Because you need to create a copy of the struct created in the function
// Or else it'd be a reference to an invalid variable
