#include <iostream>
#include <string>
// Question #1 Write a class named Ball. 
// Ball should have two private member variables, 
// one to hold a color (default value: black), 
// and one to hold a radius (default value: 10.0). 
// Add 4 constructors, one to handle each case below:

// Question #2
// Reduce the number of constructors in the above program by 
// using default arguments and delegating constructors.

class Ball
{
public:
    Ball(double radius) : Ball{"black",radius} { };
    Ball(std::string color="black", double num=10.0)
        : m_color(color), m_num(num) 
    {
        print();
    };

    void print() const {
        std::cout << "Ball (" << m_color << ", " << m_num << ")\n";
    }

private:
    std::string m_color{"black"};
    double m_num{10.0};
};

int main()
{
    Ball def{};
    Ball blue{ "blue" };
    Ball twenty{ 20.0 };
    Ball blueTwenty{ "blue", 20.0 };

    return 0;
}

