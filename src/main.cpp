// Sage - A terminal quote tool
//
// Started 25 June 2023
// by Sebastian Ibanez

#include <iostream>
#include <string>
int main()
{
	// std::cout << "Sage advice" << std::endl;
	std::string advice = "Sage advice";
	std::string printCommand = "figlet -f slant "; 
	
	system((printCommand + advice).c_str());
	
	return 0;
}
