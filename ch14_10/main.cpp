#include <iostream>
#include <string>
#include <string_view>
// Question #1 Write a class named Ball. Ball should have two private member variables, one to hold a color, and one to hold a radius.
// Also write a function to print out the color and radius of the ball.

class Ball
{
private:
	std::string m_color{ "none" };
	double m_radius{ 0.0 };

public:
	Ball(std::string_view color, double radius)
		: m_color{ color }
		, m_radius{ radius }
	{
	}

	const std::string& getColor() const { return m_color; }
	double getRadius() const { return m_radius; }
};

void print(const Ball& ball)
{
	std::cout << "Ball(" << ball.getColor() << ", " << ball.getRadius() << ")\n";
}
int main()
{
	Ball blue{ "blue", 10.0 };
	print(blue);

	Ball red{ "red", 12.0 };
	print(red);

}

// Question #2
// Why did we make print() a non-member function instead of a member function?
// A: Reduces complexity by not making it apart of our class and makes it a part of our interface

// Question #3
// Why did we make m_color a std::string instead of a std::string_view?
// A: We want our Ball object to own the string, not to be initialized to a string view
// where the string its viewing can be destroyed leaving it dangling.