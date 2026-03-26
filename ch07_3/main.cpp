#include <iostream>

int main()
{
    //Question #1
    int smaller{};
    int larger{};
    
    std::cout << "Enter an integer: ";
    std::cin >> smaller;

    std::cout << "Enter a larger integer: ";
    std::cin >> larger;

    if (larger <= smaller) 
    {
        std::cout << "Swapping the values\n";

        int hold{ larger };
        larger = smaller;
        smaller = hold;
    } // hold dies here

    std::cout << "The smaller value is " << smaller << '\n';
    std::cout << "The larger value is " << larger << '\n';

    return 0;
}// smaller and larger die here


    // Question #2
    // Q: What’s the difference between a variable’s scope, duration, and lifetime? 
    // By default,what kind of scope and duration do local variables have (and what 
    // do those mean)?
    // A: A variable’s scope determines where the variable is accessible within the 
    // source code. Duration defines the rules that govern when a variable is created and destroyed.
    // A variable’s lifetime is the actual time between its creation and destruction.
    // Local variables have block scope, which means they can be accessed from their point of definition
    // to the end of the block they are defined within.
    // Local variables have automatic duration, which means they are created at the point of definition, 
    // and destroyed at the end of the block in which they are defined.