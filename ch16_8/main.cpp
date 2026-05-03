#include <iostream>
#include <vector>
#include <string>

template <typename T>
bool isValueInArray(const std::vector<T>& values, const T& val)
{

    for (const auto& v : values)
    {
        if (v == val)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    std::vector<std::string_view> names{ "Alex","Betty","Caroline","Dave",
        "Emily","Fred","Greg","Holly"};
    std::string user_name{};

    std::cout << "Enter a name: ";
    std::cin >> user_name;

    bool found{ isValueInArray(names,static_cast<std::string_view>(user_name)) };

    if (found)
        std::cout << user_name << " was found.\n";
    else
    {
        std::cout << user_name << " was not found.\n";
    }

    return 0;
}

