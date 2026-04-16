#include <iostream>
// Question #1
// a) What is a public member?
// Member of a class that can be accessed by anyone

// b) What is a private member?
// Member of a class that can only be accessed by members of the same class

// c) What is an access specifier?
// Determines who has access to the members

// d) How many access specifiers are there, and what are they?
// Public Private Protected

// Question #2
// Write a class named Point3d.

class Point3d
{
public:
    void setValues(int x, int y, int z)
    {
        m_x = x;
        m_y = y;
        m_z = z;
    }

    void print() const
    {
        std::cout << '<' << m_x << ", " << m_y << ", " << m_z << '>';
    }

    bool isEqual(const Point3d& p) const
    {
        return (m_x == p.m_x) && (m_y == p.m_y) && (m_z == p.m_z);
    }

private:
    int m_x{};
    int m_y{};
    int m_z{};

};

int main()
{
    Point3d point1{};
    point1.setValues(1, 2, 3);

    Point3d point2{};
    point2.setValues(1, 2, 3);

    std::cout << "point 1 and point 2 are" << (point1.isEqual(point2) ? "" : " not") << " equal\n";

    Point3d point3{};
    point3.setValues(3, 4, 5);

    std::cout << "point 1 and point 3 are" << (point1.isEqual(point3) ? "" : " not") << " equal\n";

    return 0;
}

