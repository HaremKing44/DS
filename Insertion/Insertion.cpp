// Insertion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

std::string* Entries(std::string Name[10]);
void Traverse(std::string Name[10]);
std::string* Insert(std::string Name[10]);
std::string* Delete(std::string Name[10]);

int main()
{
	//Experiment.
	std::string Name[10]{};

	std::cout << "Enter 5 names: " << std::endl;

	std::string* P = Entries(Name);
	Traverse(Name);
}

std::string* Entries(std::string  Name[10])
{
	//Enter Inputs.
	for (int i{}; i < 6; i++)
	{
		std::cin >> Name[i];
	}

	std::cout << "Do you want to insert New name or Delete exixting name? 'i' or 'd'. Press 'n' for nothing." << std::endl;

	char Ans{};
	std::cin >> Ans;

	if (Ans == 'i')
	{
		Insert(Name);
	}
	else if (Ans == 'd')
	{
		Delete(Name);
	}
	{
		return Name;
	}
}

void Traverse(std::string Name[10])
{
	std::cout << std::endl;

	for (int i{}; i < 10; i++)
	{
		std::cout << "Your entered Names: " << std::endl;

		std::cout << i << ". " << Name[i] << std::endl;
	}
}

std::string* Insert(std::string Name[10])
{
	std::cout << "At which index do you want to insert new name : ";
	int Index{};
	std::cin >> Index;

	//Check the Total Number of names present in Array.
	int Size{};
	for (int i{}; i < 10; i++)
	{
		if (Name[i] != "\0")
		{
			Size++;
		}
	}

	if (Name[Index] == "\0")  //If the position is empty then dierctly enter the value.
	{
		std::cin >> Name[Index];
	}
	else if (Name[Index] != "\0") 
	{
		if (Size == 10)
		{
			std::cout << "List is Full." << std::endl;
		}
		else
		{
			for (int i{ Size }; i > Index; i--)
			{
				Name[Size] = Name[Size - 1];
				Size--;
			}

			std::cin >> Name[Index];
		}
	}

	return Name;
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