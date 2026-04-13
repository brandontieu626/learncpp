#include <iostream>
#include <string>
// Question #1

enum class MonsterType
{
    ogre,
    dragon,
    orc,
    giantSpider,
    slime,
};

struct Monster
{
    MonsterType monsterType{};
    std::string name{};
    int hp{};
};

void printMonster(const Monster& monster)
{
    std::cout << "This ";

    switch (monster.monsterType)
    {
    case MonsterType::ogre:
        std::cout << "Ogre";
        break;
    case MonsterType::dragon:
        std::cout << "Dragon";
        break;
    case MonsterType::orc:
        std::cout << "Orc";
        break;
    case MonsterType::giantSpider:
        std::cout << "Giant spider";
        break;
    case MonsterType::slime:
        std::cout << "Slime";
        break;
    default:
        break;
    }

    std::cout << " is named " << monster.name << " and has " << monster.hp << " health.\n";

};

// Question #2
// Specify whether objects of each of the given types should be passed by value, 
// const address, or const reference. 
// You can assume the function that takes these types as parameters doesn’t modify them.
// char - passed by value
// std::string - pass by const reference
// unsigned long - passed by value
// bool - passed by value
// enumerated type - passed by value
// struct Position - passed by const reference
// struct Player - passed by const reference
// int (when null is a valid argument) - pass by const address
// std::string_view - pass by value

// Question #3

template <typename T>
struct Triad 
{
    T one{};
    T two{};
    T three{};
};

template <typename T>
Triad(T, T, T) -> Triad<T>;

template <typename T>
void print(const Triad<T>& triple)
{
    std::cout << "[" << triple.one << ", " << triple.two << ", " << triple.three << "]";
};

int main()
{
    //Monster mon1{ MonsterType::ogre,"Torg",145 };
    //Monster mon2{ MonsterType::slime,"Blurp",23 };
    //printMonster(mon1);
    //printMonster(mon2);
    
    Triad t1{ 1, 2, 3 }; // note: uses CTAD to deduce template arguments
    print(t1);

    Triad t2{ 1.2, 3.4, 5.6 }; // note: uses CTAD to deduce template arguments
    print(t2);

    return 0;
}

