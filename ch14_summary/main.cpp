#include <iostream>
#include <cmath>
// Question #1:

class Point2d
{
public:
    Point2d() = default;
    Point2d(double x, double y) : m_x{ x }, m_y{ y } {};

    void print () const
    {
        std::cout << "Point2d(" << m_x << ", " << m_y << ")\n";
    }

    double distanceTo(const Point2d& point) const
    {
        return sqrt(((m_x - point.m_x) * (m_x - point.m_x))  
            + ((m_y - point.m_y)*(m_y - point.m_y)));
    }
private:
    double m_x{0.0};
    double m_y{0.0};
};


// Question #2
class Fraction
{
public:

    explicit Fraction(int numerator = 0, int denominator = 1)
        : m_numerator{ numerator }, m_denominator{ denominator }
    {
    }
    void getFraction ()
    {
        std::cout << "Enter a value for numerator: ";
        std::cin >> m_numerator;
        std::cout << "Enter a value for denominator: ";
        std::cin >> m_denominator;
        std::cout << '\n';
    }

    Fraction multiply(const Fraction& f2) const
    {
        return Fraction { m_numerator * f2.m_numerator, m_denominator * f2.m_denominator };
    }
    
    void printFraction() const
    {
        std::cout << m_numerator << '/' <<m_denominator << '\n';
    }

private:
    int m_numerator{ 0 };
    int m_denominator{ 1 };
};


// Question #3
// In the prior quiz solution, why was the Fraction constructor made explicit?
// A: To protect against implicit conversions since we have default arguments
// a Fraction object can be created with just a boolean or an int
// 
// Question #4
// In the prior quiz question, 
// why might it be better to leave getFraction() and print() as non-members?
// A: Since they act on objects of the class and aren't actions of objects
// getFraction requires 2 steps to initialize a Fraction, you must create
// an empty object and then call it to initialize the Fraction
// removing print would simplify the public interface and make the core
// functionality less cluttered
int main()
{
    //Point2d first{};
    //Point2d second{ 3.0, 4.0 };

    //first.print();
    //second.print();

    //std::cout << "Distance between two points: " << first.distanceTo(second) << '\n';


    Fraction f1{};
    f1.getFraction();
    
    Fraction f2{};
    f2.getFraction();

    std::cout << "Your fractions multiplied together: ";

    f1.multiply(f2).printFraction();

    return 0;
}

