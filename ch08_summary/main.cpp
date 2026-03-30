#undef NDEBUG
#include <iostream>
#include <cassert> // for assert
#include "Random.h"

namespace 
{
	constexpr double gravity{ 9.8 };
}

// Gets tower height from user and returns it
double getTowerHeight()
{
	std::cout << "Enter the height of the tower in meters: ";
	double towerHeight{};
	std::cin >> towerHeight;
	return towerHeight;
}

// Returns the current ball height after "seconds" seconds
double calculateBallHeight(double towerHeight, int seconds)
{

	// Using formula: s = (u * t) + (a * t^2) / 2
	// here u (initial velocity) = 0, so (u * t) = 0
	const double fallDistance{ gravity * (seconds * seconds) / 2.0 };
	const double ballHeight{ towerHeight - fallDistance };

	// If the ball would be under the ground, place it on the ground
	if (ballHeight < 0.0)
		return 0.0;

	return ballHeight;
}

// Prints ball height above ground
void printBallHeight(double ballHeight, int seconds)
{
	if (ballHeight > 0.0)
		std::cout << "At " << seconds << " seconds, the ball is at height: " << ballHeight << " meters\n";
	else
		std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
}

// Calculates the current ball height and then prints it
// This is a helper function to make it easier to do this
double calculateAndPrintBallHeight(double towerHeight, int seconds)
{
	const double ballHeight{ calculateBallHeight(towerHeight, seconds) };
	printBallHeight(ballHeight, seconds);

	return ballHeight;
}

bool isPrime(int x)
{
	if (x <= 1) // if x is negative, 0, or 1 then the number is not prime
		return false;

	for (int test{ 2 }; test < x; ++test)
	{
		if (x % test == 0) // if x is evenly divisible
			return false;  // then this number isn't prime
	}

	return true; // if we didn't find any divisors, then x must be prime
}

bool playHiLo(int guesses, int min, int max)
{
	std::cout << "Let's play a game. I'm thinking of a number between " << min << " and " << max << ". You have " << guesses << " tries to guess what it is.\n";
	const int number{ Random::get(min, max) }; // this is the number the user needs to guess

	// Loop through all of the guesses
	for (int count{ 1 }; count <= guesses; ++count)
	{
		std::cout << "Guess #" << count << ": ";

		int guess{};
		std::cin >> guess;

		if (guess > number)
			std::cout << "Your guess is too high.\n";
		else if (guess < number)
			std::cout << "Your guess is too low.\n";
		else // guess == number, so the user won
		{
			std::cout << "Correct! You win!\n";
			return true;
		}
	}

	// The user lost
	std::cout << "Sorry, you lose. The correct number was " << number << '\n';
	return false;
}

bool playAgain()
{
	// Keep asking the user if they want to play again until they pick y or n.
	while (true)
	{
		char ch{};
		std::cout << "Would you like to play again (y/n)? ";
		std::cin >> ch;

		switch (ch)
		{
		case 'y': return true;
		case 'n': return false;
		}
	}
}

int main()
{
	//Question #1:
	//const double towerHeight{ getTowerHeight() };

	//for (int seconds{ 0 };calculateAndPrintBallHeight(towerHeight, seconds)>0.0;++seconds) {

	//}

	//Question #2:
	//assert(!isPrime(0));
	//assert(!isPrime(1));
	//assert(isPrime(2));
	//assert(isPrime(3));
	//assert(!isPrime(4));
	//assert(isPrime(5));
	//assert(isPrime(7));
	//assert(!isPrime(9));
	//assert(isPrime(11));
	//assert(isPrime(13));
	//assert(!isPrime(15));
	//assert(!isPrime(16));
	//assert(isPrime(17));
	//assert(isPrime(19));
	//assert(isPrime(97));
	//assert(!isPrime(99));
	//assert(isPrime(13417));

	//Question #3:
	//constexpr int guesses{ 7 }; // the user has this many guesses
	//constexpr int min{ 1 };
	//constexpr int max{ 100 };

	//do
	//{
	//	playHiLo(guesses, min, max);
	//} while (playAgain());

	//std::cout << "Thank you for playing.\n";

	return 0;
}