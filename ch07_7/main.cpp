#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

// Question #1
// What’s the difference between a variable’s scope, 
// duration, and linkage? What kind of scope, duration
// , and linkage do global variables have?'
// A: Scope determines where a variable is accessible. 
// Duration determines when a variable is created and destroyed.
// Linkage determines whether the variable can be exported to another file or not.
// Global variables have global scope (a.k.a. file scope), which means they can 
// be accessed from the point of declaration to the end of the file in which they are declared.
// Global variables have static duration, created at program start and destroyed at end.
// Global variables can have external or internal linkage from static and extern keywords
