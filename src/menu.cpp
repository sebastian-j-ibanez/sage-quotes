// Sage - A terminal quote tool
//
// Started 25 June 2023
// by Sebastian Ibanez

#include "../include/menu.h"
#include <iostream>

using namespace std;

int getMenuOption(int numOfOptions)
{
	int selected = -1;
	
	do {
		std::cout << "Please select an option: " << std::endl;
		std::cin >> selected;
	} while (selected > 0 && selected <= numOfOptions);
	
	return selected;
}
