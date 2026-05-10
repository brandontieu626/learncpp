#include <iostream>
#include <array>
int main()
{
    constexpr std::array<char,5> v{ 'h','e','l','l','o' };
    std::cout << "The length is " << std::size(v) << '\n';
    std::cout << v[1] << v.at(1) << std::get<1>(v) << '\n';

    return 0;
}

