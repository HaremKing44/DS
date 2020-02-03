// Bubble Sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int* BubbleSort(int Array[]);

int main()
{
	std::cout << "Your Array before Bubble sort: " << std::endl;
	int Array[]{ 32, 51, 27, 85, 66, 23, 13, 57 };
	
	for (int i{}; i < 8; i++)
	{
		std::cout << i + 1 << ". " << Array[i] << std::endl;
	}

	std::cout << "Your Array after Bubble sort: " << std::endl;
	BubbleSort(Array);
	for (int i{}; i < 8; i++)
	{
		std::cout << i + 1 << ". " << Array[i] << std::endl;
	}
}

int* BubbleSort(int Array[])
{
	int size{ 7 };

	int temp{};

	for (int a{}; a < size; a++)
	{
		for (int i{}; i < 7; i++)
		{
			if (Array[i] > Array[i + 1])
			{
				temp = Array[i];
				Array[i] = Array[i + 1];
				Array[i + 1] = temp;
			}
		}
	}

	return Array;
}