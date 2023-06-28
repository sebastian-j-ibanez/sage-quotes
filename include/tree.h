// Sage - A terminal quote tool
//
// Started 25 June 2023
// by Sebastian Ibanez

#include <string>

class Quote
{
	private:
	std::string message;
	std::string author;
	std::string source;
	std::string year;
	
	public:
	std::string getMessage();
	std::string getAuthor();
	std::string getSource();
	std::string getYear();

	std::string setMessage(std::string newMessage);
	std::string setAuthor(std::string newAuthor);
	std::string setSource(std::string newSource);
	std::string setYear(std::string newYear);	
}

class Node
{
	Node* left;
	Node* right;
	Quote data;	

	public:
	Node* getLeft();
	Node* getRight();
	Quote getQuote();

	Node* setLeft(Node* newNode);
	Node* setRight(Node* newNode);
	Quote setQuote(Quote newQuote);

}
