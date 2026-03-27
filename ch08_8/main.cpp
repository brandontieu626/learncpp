#include <iostream>

int main()
{
    // Question #2:
    /*
      Write a program that prints out the letters 
      a through z along with their ASCII codes. 
      Use a loop variable of type char.
    */
    
    //char c{ 'a' };

    //while (c < 'z')
    //{
    //    std::cout << c << ":" << static_cast<int>(c) << '\n';
    //    ++c;
    //}


    // Question #3: 
    /*
      Invert the nested loops example
    */

    //for (int i{ 5 };i > 0;--i) 
    //{

    //    for (int j{ i };j>0;--j) 
    //    {
    //        std::cout << j << " ";
    //    }
    //    std::cout << '\n';
    //}

    // Question #4:
        // There are 5 rows, we can loop from 1 to 5
    int outer{ 1 };

    while (outer <= 5)
    {
        // Row elements appear in descending order, so start from 5 and loop through to 1
        int inner{ 5 };

        while (inner >= 1)
        {
            // The first number in any row is the same as the row number
            // So number should be printed only if it is <= the row number, space otherwise
            if (inner <= outer)
                std::cout << inner << ' '; // print the number and a single space
            else
                std::cout << "  "; // don't print a number, but print two spaces

            --inner;
        }

        // A row has been printed, move to the next row
        std::cout << '\n';

        ++outer;
    }

}

