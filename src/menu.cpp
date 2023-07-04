// Sage - A terminal quote tool
//
// Started 25 June 2023
// by Sebastian Ibanez

#include "../include/menu.h"

using std::cout;
using std::cin;
using std::endl;

int getMenuOption(int numOfOptions)
{
	int selected = -1;
	
	do {
		cout << "Please select an option: " << endl;
		cin >> selected;
	} while (selected > 0 && selected <= numOfOptions)
	
	return selected;
}
