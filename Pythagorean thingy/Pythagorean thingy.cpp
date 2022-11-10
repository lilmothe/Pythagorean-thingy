// Pythagorean thingy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>
using namespace std;
//using namespace Pythagorean;
int main()
{
    std::string hypSide;
    double sideA{};
    double sideB{};
    double hyp = 0.0;

    std::cout << "Would you like to find out the value of the Hypotenuse or A Side?\n\n(Type Hypotenuse or Side):\n";
    std::cin >> hypSide;
    if (hypSide == "Hypotenuse")
    {
        std::cout << "You chose to find the Hypotenuse\n Please input Side A\n";
        std::cin >> sideA;
        //takes an input for sideA;
        std::cout << "Now input Side B\n";
        std::cin >> sideB;
        //takes an input for sideB
        std::cout << "The Hypotenuse is : ";

        double squareRoot = sideA * sideA + sideB * sideB;
        //this sets the value of squareRoot to sideA^2 + sideB^2
        std::cout << sqrt(squareRoot) << " in length";
        return 0;
        //task finished successfully.
    }
	//^if the user inputs Hypotenuse, the program will ask for the value of sideA and sideB, and then calculate the hypotenuse

    if (hypSide == "Side")
    {
        std::cout << "You chose to figure out a side. (that isn't the hypotenuse) \n Please input the Hypotenuse \n";
        std::cin >> sideA;
        //takes an input for sideA;
        std::cout << "Now input Side B (The Smaller one.)\n";
        std::cin >> sideB;
        //takes an input for sideB
        std::cout << "The side is; ";

        double squareRoot = sideA * sideA - sideB * sideB;
        //this sets the value of squareRoot to sideA^2 - sideB^2
        std::cout << sqrt(squareRoot) << " in length";

        return 0;
        //task finished successfully.
    }
    //^if the user inputs Side, the program will ask for the value of sideA (the hypotenuse) and sideB, and then calculate the missing side
    
    
    std::cout << "Did you make a typo? the inputs are case sensitive.\n\n";
	return 1;
    //something went wrong
}

