// Deletion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

std::string* Entries(std::string Name[10]);
void Traverse(std::string Name[10]);
std::string* Delete(std::string Name[10]);

int main()
{
	std::string Name[10]{};

    std::cout << "Enter 5 Names: ";
	
	std::string* P = Entries(Name);
	Traverse(Name);
}

std::string* Entries(std::string Name[10])
{
	for (int i{}; i < 5; i++)
	{
		std::cin >> Name[i];
	}

	std::cout << "Do you want to delete any name: 'y' or 'n' " << std::endl;
	char Ans{};
	std::cin >> Ans;

	if (Ans == 'y')
	{
		Delete(Name);
	}
	else
	{
		return Name;
	}
}

void Traverse(std::string Name[10])
{
	std::cout << "\nYour entered names: " << std::endl;

	for (int i{}; i < 10; i++)
	{
		std::cout << i << ". " << Name[i] << std::endl;
	}
}

std::string* Delete(std::string Name[10])
{
	std::cout << "At which index do you want to delete the name: ";
	int Index{};
	std::cin >> Index;

	int Size{};
	for (int i{}; i < 10; i++)
	{
		if (Name[i] != "\0")
			Size++;
	}

	Name[Index] == "\0";
	for (int i{ Index }; i < Size; i++)
	{
		Name[i] = Name[i + 1];
		if (Name[i + 1] == "\0")
		{
			break;
		}
	}

	return Name;
}