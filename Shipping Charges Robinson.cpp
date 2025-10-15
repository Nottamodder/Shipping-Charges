// Shipping Charges Robinson.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>

int main()
{
	/* Write a program that asks for the weight of the package and the distance it is to be shipped, then
	displays the charges.
	Input Validation: Do not accept values of 0 or less for the weight of the package. Do not accept
	weights of more than 20 kg (this is the maximum weight the company will ship). Do not accept
	distances of less than 10 miles or more than 3,000 miles. These are the company’s minimum and
	maximum shipping distances. */
	//exclude weights over 20 and 0 or less, and less than 10 miles or more than 3000
	float weight, distance;
	std::cout << "Input your package weight (in kilograms) \n";
	std::cin >> weight;
	if (weight > 0 && weight <= 20)
		std::cout << "Weight accepted\n";
	else {
		(std::cout << "Weight not accepted\n" << std::endl);
		exit(EXIT_FAILURE);
	}
	std::cout << "Input your shipping distance (in miles) \n";
	std::cin >> distance;
	if (distance >= 10 && distance <= 3000) {
		std::cout << "Distance accepted\n";
	}
	else {
		(std::cout << "Distance not accepted\n" << std::endl);
		exit(EXIT_FAILURE);
	}
	float cost, distanceSetup = 0;
//500 mile rule
	if (distance <= 500)
		distanceSetup = 1;
	else if (distance <= 1000)
		distanceSetup = 2;
	else if (distance <= 1500)
		distanceSetup = 3;
	else if (distance <= 2000)
		distanceSetup = 4;
	else if (distance <= 2500)
		distanceSetup = 5;
	else if (distance <= 3000)
		distanceSetup = 6;
/*Weight of Package (in Kilograms)             Rate per 500 Miles Shipped
		2 kg or less                                    $1.10
		Over 2 kg but not more than 6 kg                $2.20
		Over 6 kg but not more than 10 kg               $3.70
		Over 10 kg but not more than 20 kg              $4.80   */
	if (weight <= 2)
		cost = distanceSetup * 1.10;
	else if (weight > 2 && weight <= 6)
		cost = distanceSetup * 2.20;
	else if (weight > 6 && weight <= 10)
		cost = distanceSetup * 3.70;
	else if (weight > 10)
		cost = distanceSetup * 4.80;
std::cout << "Your shipping cost will be $" << cost;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
