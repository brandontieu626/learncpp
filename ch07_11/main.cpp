#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

// Question #1: What effect does using keyword static have on a global variable? What effect does it have on a local variable?
// On a global variable it makes it have internal linkage
// On local variable, it has static duration. 
// Meaning its duration is extended to the lifetime of the program and is created once