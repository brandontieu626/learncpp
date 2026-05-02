#include <iostream>
#include <vector>

int main()
{
    // Question #1
    std::vector v{ 'h','e','l','l','o' };
    std::cout << std::size(v) << '\n';
    std::cout << v[1] << v.at(1) << '\n';
    std::cout << "Hello World!\n";

    // Question #2
    // What is size_type and what is it used for?
    // A: type def for a large unsiged integral that's used for indices and length of a
    // standard library container
    
    // What type does size_type default to? Is it signed or unsigned?
    // A: std::size_t, unsigned type

    // Which functions to get the length of a container return size_type?
    // A: std::size, .size()
}

