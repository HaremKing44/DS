// BinarySearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int* BinarySearch(int Array[]);

int main()
{
	std::cout << "Your Array: " << std::endl;
	int Array[]{11, 22, 30, 33, 40, 44, 55, 60, 66, 77, 80, 88, 99};

	BinarySearch(Array);
}

int* BinarySearch(int Array[])
{
	int BEG{}, END{}, MID{};
}