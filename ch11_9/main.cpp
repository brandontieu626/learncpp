// define your factorial() function template here

template <int N>
constexpr int factorial()
{
    static_assert(N >= 0);

    int product{ 1 };
    for (int i{ 1 };i <= N;++i)
        product *= i;
    return product;
}

int main()
{
    // Question #1: Write a constexpr function template with a non-type template parameter 
    // that returns the factorial of the template argument. 
    // The following program should fail to compile when it reaches factorial<-3>().
    static_assert(factorial<0>() == 1);
    static_assert(factorial<3>() == 6);
    static_assert(factorial<5>() == 120);

    factorial<-3>(); // should fail to compile

    return 0;
}