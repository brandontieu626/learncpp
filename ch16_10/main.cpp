#include <iostream>
#include <vector>


template<typename T>
void printStackValues(const std::vector<T>& arr)
{
    if (arr.size() != 0)
    {
        std::cout << "(Stack: ";
        for (const T& x : arr)
        {
            std::cout << x << " ";
        }
        std::cout << ")\n";
    }
    else
    {
        std::cout << "(Stack: empty)\n";
    }

}

void popAndPrint(std::vector<int>& v)
{
    v.pop_back();
    std::cout << "Pop ";
    printStackValues(v);
}

template <typename T>
void pushAndPrint(std::vector<T>& arr, T x)
{
    arr.push_back(x);
    std::cout << "Push " << x << " ";
    printStackValues(arr);
}

int main()
{
    std::vector<int> v{};

    printStackValues(v);

    pushAndPrint(v, 1);
    pushAndPrint(v, 2);
    pushAndPrint(v, 3);
    popAndPrint(v);
    pushAndPrint(v, 4);
    popAndPrint(v);
    popAndPrint(v);
    popAndPrint(v);

    return 0;
}