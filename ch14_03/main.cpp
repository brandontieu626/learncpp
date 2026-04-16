#include <iostream>
// Question #1 Create a struct called IntPair that holds two integers. 
// Add a member function named print that prints the value of the two integers.

// Question #2 Add a new member function to IntPair named isEqual 
// that returns a Boolean indicating whether one IntPair is equal to another.
struct IntPair
{
    int one{};
    int two{};

    void print()
    {
        std::cout << "Pair:(" << one << ", " << two << ")\n";
    }

    bool isEqual(const IntPair& other)
    {
        return ((one == other.one) && (two == other.two));
    }
};
int main()
{
    IntPair p1{ 1, 2 };
    IntPair p2{ 3, 4 };

    std::cout << "p1: ";
    p1.print();

    std::cout << "p2: ";
    p2.print();

    std::cout << "p1 and p1 " << (p1.isEqual(p1) ? "are equal\n" : "are not equal\n");
    std::cout << "p1 and p2 " << (p1.isEqual(p2) ? "are equal\n" : "are not equal\n");

    return 0;
}

