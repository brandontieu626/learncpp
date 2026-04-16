#include <iostream>
// Question #1
// Given some set of values (ages, address numbers, etc…), we might want to know what the minimum and maximum values are in that set. 
// Since the minimum and maximum values are related, we can organize them in a struct, like so:
struct minMax
{
    int min; // holds the minimum value seen so far
    int max; // holds the maximum value seen so far
};

// However, as written, this struct has an unspecified class invariant.What is the invariant ?
// A: Min could be greater than max and that would cause issues
int main()
{
    std::cout << "Hello World!\n";
}

