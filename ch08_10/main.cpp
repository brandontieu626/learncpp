#include <iostream>

void fizzBuzz(int x);

int main()
{
    // Question #4 Fizz Buzz
    fizzBuzz(150);
    return 0;
    
}

void fizzBuzz(int x) 
{

    for (int i{ 1 };i <= x;++i) 
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            std::cout << "fizzbuzz\n";
        }
        else if (i % 3 == 0) 
        {
            std::cout << "fizz\n";
        }
        else if (i % 5 == 0)
        {
            std::cout << "buzz\n";
        }
        else if (i % 7 == 0)
        {
            std::cout << "pop\n";
        }
        else 
        {
            std::cout << i << "\n";

        }
    }
}

