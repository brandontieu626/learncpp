#include <iostream>

int main()
{
	// Question #1: What values does this program print? 
	// Assume a short is 2 bytes, and a 32-bit machine.
	short value{ 7 }; // &value = 0012FF60
	short otherValue{ 3 }; // &otherValue = 0012FF54

	short* ptr{ &value };

	std::cout << &value << '\n';  //0012FF60
	std::cout << value << '\n';   //7
	std::cout << ptr << '\n';     //0012FF60
	std::cout << *ptr << '\n';    //7
	std::cout << '\n';

	*ptr = 9;

	std::cout << &value << '\n'; //0012FF60
	std::cout << value << '\n';  //9
	std::cout << ptr << '\n';    //0012FF60
	std::cout << *ptr << '\n';   //9
	std::cout << '\n';

	ptr = &otherValue;

	std::cout << &otherValue << '\n';  //0012FF54
	std::cout << otherValue << '\n';   //3
	std::cout << ptr << '\n';          //0012FF54
	std::cout << *ptr << '\n';         //3
	std::cout << '\n';

	std::cout << sizeof(ptr) << '\n';  //4
	std::cout << sizeof(*ptr) << '\n'; //2

	// Question #2: What's wrong with this snippet of code
	// A: Derefencing ptr to access v1 and assigning it a pointer of itself
	// Should be ptr = &v2;
	int v1{ 45 };
	int* ptr{ &v1 }; // initialize ptr with address of v1

	int v2{ 78 };
	*ptr = &v2;     // assign ptr to address of v2

	return 0;
}