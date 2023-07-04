// Sage - A terminal quote tool
//
// Started 25 June 2023
// by Sebastian Ibanez

#include "../include/tree.h"

Quote::std::string getMessage() { return this.message; }
Quote::std::string getAuthor() { return this.author; }
Quote::std::string getSource() { return this.source; }
Quote::std::string getYear() { return this.year; }

Quote::std::string setMessage(std::string newMessage) { 
	this.message = newMessage; 
}

Quote::std::string setAuthor(std::string newAuthor) { 
	this.author = newAuthor; 
}

Quote::std::string setSource(std::string newSource) { 
	this.source = newSource; 
}

Quote::std::string setYear(std::string newYear) { 
	this.year = newYear; 
}
