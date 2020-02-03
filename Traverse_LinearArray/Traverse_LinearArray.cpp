// Traverse_LinearArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
	std::string Name[10]{};
	std::cout << "Enter 5 names: " << std::endl;

	for (int i{}; i < 5; i++)
	{
		std::cin >> Name[i];
	}

	for (int i{}; i < 5; i++)
	{
		std::cout << "Your entered Names: " << std::endl;

	    std::cout << i << ". " << Name[i] << std::endl;
	}
}