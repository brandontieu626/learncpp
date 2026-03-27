#include <iostream>

int calculate(int x, int y, char op);

int main()
{
    //Question #1:
    /*
      Write a function called calculate() that takes 
      two integers and a char representing one of the following mathematical 
      operations: +, -, *, /, or % (remainder). 
      Use a switch statement to perform the appropriate mathematical 
      operation on the integers, and return the result. If an invalid operator is passed into the function, the function should print an error message. 
      For the division operator, do an integer division, and don’t worry about divide by zero.
    */

    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    std::cout << "Enter another integer: ";
    int y{};
    std::cin >> y;

    std::cout << "Enter a mathematical operator (+, -, *, /, or %): ";
    char op{};
    std::cin >> op;

    int result{ calculate(x,y,op) };
    std::cout << x << ' ' << op << ' ' << y << " is " << result << '\n';

    return 0;
}

int calculate(int x, int y, char op)
{
    switch (op)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    case '%':
        return x % y;
    default:
        std::cout << "Invalid operator\n";
        return 0;
    }
}