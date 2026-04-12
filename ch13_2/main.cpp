#include <iostream>

// Question #1 
// Define an unscoped enumerated type named MonsterType 
// to choose between the following monster races: 
// orc, goblin, troll, ogre, and skeleton.

// Question #2
// Put the MonsterType enumeration inside a namespace.Then, 
// create a main() function and instantiate a troll.The program should compile.


namespace Monster
{
	enum MonsterType
	{
		orc,
		goblin,
		troll,
		ogre,
		skeletion,
	};
}

int main()
{
	[[maybe_unused]] Monster::MonsterType monster{ Monster::troll };
	return 0;
}

