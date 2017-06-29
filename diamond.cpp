// uses recursion to print a diamond

#include "stdafx.h"
#include <iostream>

//prototype
void print(int count, int width, bool flag);

int main()
{
	int count = 1;
	int width;
	bool flag = true;
	std::cout << "How high should the each half of the diamond be? ";
	std::cin >> width;
	print(count, width, flag);
	return 0;
}

// Prints a diamond of zeroes
void print(int count, int width, bool flag)
{
	if (width > 1) { // Prevents infinite loop
		if (count == width)
		{
			flag = false;
		}
		if (count > 0) { //stops calling at bottom of diamond
			for (int i = 0; i < width - count; i++) {
				std::cout << " ";
			}
			for (int i = 0; i < (count * 2) - 1; i++)
			{
				std::cout << "O";
			}
			std::cout << std::endl;
			if (flag) { // Increases 0s for first half, decreases for second
				count++;
			}
			else {
				count--;
			}
			print(count, width, flag);
		}
	}
	else {
		std::cout << ":(\n";
	}
}