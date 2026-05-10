#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

//Question #2
namespace Items
{
    enum Type : int
    {
        health_potion,
        torch,
        arrow,
        max_items
    };
}

int countItems(const std::vector<int>& inventory)
{
    int sum{ 0 };

    for (const auto x : inventory)
        sum += x;


    return sum;
}

template <typename T>
constexpr std::size_t toUZ(T value)
{
    // make sure T is an integral type
    static_assert(std::is_integral<T>() || std::is_enum<T>());

    return static_cast<std::size_t>(value);
}

std::string_view getItemNamePlural(Items::Type type)
{
    switch (type)
    {
    case Items::health_potion:  return "health potions";
    case Items::torch:          return "torches";
    case Items::arrow:          return "arrows";

    default:                    return "???";
    }
}

std::string_view getItemNameSingular(Items::Type type)
{
    switch (type)
    {
    case Items::health_potion:  return "health potion";
    case Items::torch:          return "torch";
    case Items::arrow:          return "arrow";

    default:                    return "???";
    }
}

void printInventoryItem(const std::vector<int>& inventory, Items::Type type)
{
    bool plural{ inventory[toUZ(type)] != 1 };
    std::cout << "You have " << inventory[toUZ(type)] << ' ';
    std::cout << (plural ? getItemNamePlural(type) : getItemNameSingular(type)) << '\n';
}

template <typename T>
std::pair<std::size_t, std::size_t> findMinMaxIndices(const std::vector<T>& arr)
{
    auto result = std::minmax_element(arr.begin(), arr.end());

    return { *result.first, *result.second };
}

template <typename T>
void printArray(const std::vector<T>& v)
{
    bool comma{ false };
    std::cout << "With array ( ";
    for (const auto& e : v)
    {
        if (comma)
            std::cout << ", ";

        std::cout << e;
        comma = true;
    }
    std::cout << " ):\n";
}


int main()
{
    // Question #1 
    // a) A std::vector initialized with the first 6 even numbers.
    // std::vector v1 {2,4,6,8,10,12};

    // b) A constant std::vector initialized with the values 1.2, 3.4, 5.6, and 7.8.
    // const std::vector v2 {1.2, 3.4, 5.6,7.8};

    // using namespace std::literals::string_view_literals; 
    // c) A constant std::vector of std::string_view initialized with the names “Alex”, “Brad”, “Charles”, and “Dave”.
    // const std::vector v3 {"Alex"sv,"Brad"sv,"Charles"sv,"Dave"sv};

    // d) A std::vector with the single element value 12.
    // std::vector {12};

    // e) A std::vector with 12 int elements, initialized to the default values.
    // std::vector<int> (12);

    // Question #2
    // std::vector inventory{1,5,10};
    // assert(std::size(inventory)==Items::Type::max_items);

    // for (int i=0; i < Items::Type::max_items; ++i)
    // {
    //     auto item { static_cast<Items::Type>(i) };
    //     printInventoryItem(inventory, item);
    // }

    // std::cout << "You have " << countItems(inventory) << " total items\n";

    // Question #3
    std::vector v1{};
    std::cout << "Enter numbers to add (use -1 to stop): ";

    while (true)
    {
        int input{};
        std::cin >> input;

        if (input == -1)
        {
            break;
        }

        if (!std::cin)
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        v1.push_back(input);
    }

    auto m1{ findMinMaxIndices(v1) };
    std::cout << "The min element has index " << m1.first << " and value " << v1[m1.first] << '\n';
    std::cout << "The max element has index " << m1.second << " and value " << v1[m1.second] << '\n';

    std::cout << '\n';

    return 0;



}