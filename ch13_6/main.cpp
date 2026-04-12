#include <iostream>

// Question #1
// Define an enum class named Animal that contains the following animals: 
// pig, chicken, goat, cat, dog, duck. 
// Write a function named getAnimalName() that takes an Animal parameter and uses a switch statement to 
// return the name for that animal as a std::string_view (or std::string if you’re using C++14). 
// Write another function named printNumberOfLegs() 
// that uses a switch statement to print the number of legs each animal walks on. 
// Make sure both functions have a default case that prints an error message. 
// Call printNumberOfLegs() from main() with a cat and a chicken. Your output should look like this:
// A cat has 4 legs.
// A chicken has 2 legs.

enum class Animal
{
    pig,
    chicken,
    goat,
    cat,
    dog,
    duck,
};

constexpr std::string_view getAnimalName(const Animal& animal)
{
    switch (animal)
    {
    case Animal::pig:
        return "pig";
    case Animal::chicken:
        return "chicken";
    case Animal::goat:
        return "goat";
    case Animal::cat:
        return "cat";
    case Animal::dog:
        return "dog";
    case Animal::duck:
        return "duck";
    default:
        return "invalid";
    }
}

void printNumberOfLegs(const Animal& animal)
{
    switch (animal)
    {
    case Animal::pig:
    case Animal::goat:
    case Animal::cat:
    case Animal::dog:
        std::cout << "A " << getAnimalName(animal) << " has 4 legs\n";
        break;
    case Animal::chicken:
    case Animal::duck:
        std::cout << "A " << getAnimalName(animal) << " has 2 legs\n";
        break;
    }
}

int main()
{
    Animal creature{Animal::cat};

    Animal creature2{ Animal::chicken };

    printNumberOfLegs(creature);
    printNumberOfLegs(creature2);
    return 0;
}

