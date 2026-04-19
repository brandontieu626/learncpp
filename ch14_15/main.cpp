#include <iostream>
// Question #1
// In the lesson above, we noted that the parameter for a copy constructor must be a (const) reference.
// Why aren’t we allowed to use pass by value?
// A: When you pass by value with an object, it calls the copy constructor to copy it
// This will lead to an infinite call of the copy constructor
int main()
{
    std::cout << "Hello World!\n";
}

