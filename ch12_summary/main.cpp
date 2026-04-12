#include <iostream>
#include <algorithm>

void sort2(int& x, int& y);
int main()
{
    // Question #1
    // For each of the following expressions on the right side of operator <<
    // , indicate whether the expression is an lvalue or rvalue:

    // r value
    std::cout << 5;

    // l value
    int x{ 5 };
    std::cout << x;

    // r value
    int x{ 5 };
    std::cout << x + 1;

    // r value
    int foo() { return 5; }
    std::cout << foo();

    //l value
    int& max(int& x, int& y) { return x > y ? x : y; }
    int x{ 5 };
    int y{ 6 };
    std::cout << max(x, y);

    // Question #2
    // What is the output of this program?
    // A: 7 6
    int x{ 4 };
    int y{ 6 };

    int& ref{ x };
    ++ref;
    ref = y;
    ++ref;

    std::cout << x << ' ' << y;


    // Question #3
    // Name two reasons why we prefer to pass arguments 
    // by const reference instead of by non-const reference whenever possible.
    // 1) You don't want the function to modify the variable the reference refers to
    // 2) A non const reference parameter can only take a modifiable l value.
    // A const refernce parameter can take a modifiable l value, const l value, and r value

    // Question #4
    // What is the difference between a const pointer and a pointer-to-const?
    // A: A const pointer is a pointer that can't change what address it points to
    // A pointer to const is a pointer to an lvalue that can't be modified

    // Question #5
    int x{ 7 };
    int y{ 5 };

    std::cout << x << ' ' << y << '\n';

    sort2(x, y); // make sure sort works when values need to be swapped
    std::cout << x << ' ' << y << '\n';

    sort2(x, y); // make sure sort works when values don't need to be swapped
    std::cout << x << ' ' << y << '\n';
    

    return 0;
}

void sort2(int& x, int& y) 
{
    if (x > y) 
    {
        std::swap(x, y);
    }
}