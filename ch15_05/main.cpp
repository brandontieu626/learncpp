#include <iostream>
// Question #1
// Write a class template named Triad that has 3 private data members 
// with independent type template parameters. 
// The class should have a constructor, access functions, 
// and a print() member function that is defined outside the class.

template <typename T, typename U, typename Z>
class Triad
{
public:
    Triad(const T& first, const U& second, const Z& third)
        : m_first{ first },
        m_second{ second },
        m_third{ third }
    {
    };

    constexpr const T& first() const { return m_first; };
    constexpr const U& second() const { return m_second; };
    constexpr const Z& third() const { return m_third; };
    
    void print() const;

private:
    T m_first{};
    U m_second{};
    Z m_third{};
};

template <typename T, typename U, typename Z>
void Triad<T,U,Z>::print() const {
    std::cout << "[" << m_first << ", " << m_second << ", " << m_third << "]\n";
}
int main()
{
    Triad<int, int, int> t1{ 1, 2, 3 };
    t1.print();
    std::cout << '\n';
    std::cout << t1.first() << '\n';

    using namespace std::literals::string_literals;
    const Triad t2{ 1, 2.3, "Hello"s };
    t2.print();
    std::cout << '\n';

    return 0;
}

// Question #2:
// If we remove the const from the print() function declaration and definition
// , the program will no longer compile. Why not?
// A: t2 is a const object so it needs to only call const functions
