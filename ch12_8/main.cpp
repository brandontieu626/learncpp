#include <iostream>

int main()
{
    // Question #1
    // 1a Can we determine whether a pointer is a null pointer or not? If so, how?
    // A: Yes by check if ptr or if ptr == nullptr
    // 1b Can we determine whether a non-null pointer is valid or dangling? If so, how?
    // A: No you can't really easily

    // Question #2
    // For each subitem, answer whether the action described 
    // will result in behavior that is: predictable, undefined, or possibly undefined. 
    // If the answer is “possibly undefined”, clarify when.
    // 2a Assigning the address of an object to a non-const pointer
    // A: Predictable
    // 2b Assigning nullptr to a pointer
    // A: Predictable
    // 2c Dereferencing a pointer to a valid object
    // A: Predictable
    // 2d Dereferencing a dangling pointer
    // A: Undefined
    // 2e Dereferencing a null pointer
    // A: Undefined
    // 2f Dereferencing a non null pointer
    // A: Possibly undefined, depends if pointer is dangling

    // Question #3
    // Why should we set pointers that aren’t pointing to a valid object to ‘nullptr’?
    // A: So we can safely check if a pointer is invalid later 

    std::cout << "Hello World!\n";
}

