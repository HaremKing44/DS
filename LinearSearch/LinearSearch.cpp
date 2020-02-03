// LinearSearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int* Enter(int Array[]);
int* LinearSearch(int Array[]);

int main()
{
    std::cout << "Enter 8 Numbers in your Array: " << std::endl;
	int Array[8]{};
	
	Enter(Array);
	int In{1};
	for (int i{}; i < 8; i++)
	{
		std::cout << In << ". " << Array[i] << std::endl;
		In++;
	}

	std::cout << "\nWhich element do you want to search in your array: " << std::endl;
	LinearSearch(Array);
}

int* Enter(int Array[])
{
	int i{};
	while (i != 8)
	{
		std::cin >> Array[i];
		i++;
	}

	return Array;
}

int* LinearSearch(int Array[])
{
	int Element{};
	std::cin >> Element;
	
	int i{}, Result{};
	while (i != 8)
	{
		if (Array[i] == Element)
		{
			std::cout << "Your element is at " << "'" << i + 1 << "'" << " index." << std::endl;
		}
		else if (i == 7 && Array[i] != Element)
		{
			std::cout << "Element is not your array." << std::endl;
		}
		i++;
	}

	return Array;
}