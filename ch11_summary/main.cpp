#include <iostream>

//write add function template here
template <typename T>
T add(T x, T y) { return x + y; };

template <typename T>
T mult(T x, int y) { return x * y; };

template <typename T, typename U>
auto sub(T x, U y) { return x - y; };


template <typename T>
int count(T) // This is the same as int count(T x), except we're not giving the parameter a name since we don't use the parameter
{
    static int c{ 0 };
    return ++c;
}

int foo(int n)
{
    return n + 10;
}

template <typename T>
int foo(T n)
{
    return n;
}

int main()
{
    // Question #2:
    std::cout << add(2, 3) << '\n';
    std::cout << add(1.2, 3.4) << '\n';

    std::cout << mult(2, 3) << '\n';
    std::cout << mult(1.2, 3) << '\n';

    std::cout << sub(3, 2) << '\n';
    std::cout << sub(3.5, 2) << '\n';
    std::cout << sub(4, 1.5) << '\n';

    // Question #3: What is the output of this program and why?
    // A: Each instance of the function has its own static int
    // 1
    // 2
    // 1
    // 2
    std::cout << count(1) << '\n';
    std::cout << count(1) << '\n';
    std::cout << count(2.3) << '\n';
    std::cout << count<double>(1) << '\n';


    //Question #4: What is the output of this program?
    std::cout << foo(1) << '\n'; // #1 A:11

    short s{ 2 };
    std::cout << foo(s) << '\n'; // #2 A: 2

    std::cout << foo<int>(4) << '\n'; // #3 A: 4

    std::cout << foo<int>(s) << '\n'; // #4 A: 2 

    std::cout << foo<>(6) << '\n'; // #5 A: 6 (This only matches function templates)

    return 0;
}

// Question #1: What is the output of the program and why? 
// A: uses void print(x) because short to double is numeric conversion
// whereas short to int is numeric promotion
//void print(int x)
//{
//    std::cout << "int " << x << '\n';
//}
//
//void print(double x)
//{
//    std::cout << "double " << x << '\n';
//}
//
//int main()
//{
//    short s{ 5 };
//    print(s);
//
//    return 0;
//}


// Question #1b: Why won't the following compile?
// A: ambigious function call between print() and print( x = 0 )
//void print()
//{
//    std::cout << "void\n";
//}
//
//void print(int x = 0)
//{
//    std::cout << "int " << x << '\n';
//}
//
//void print(double x)
//{
//    std::cout << "double " << x << '\n';
//}
//
//int main()
//{
//    print(5.0f);
//    print();
//
//    return 0;
//}

// Question #1c: Why won't the following compile?
// A: ambigious function call, both are numeric conversions
//void print(long x)
//{
//    std::cout << "long " << x << '\n';
//}
//
//void print(double x)
//{
//    std::cout << "double " << x << '\n';
//}
//
//int main()
//{
//    print(5);
//
//    return 0;
//}
