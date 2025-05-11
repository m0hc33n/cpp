#include <iostream>
#include <string>

int main()
{
	std::string string("HI THIS IS BRAIN");
	std::string* stringPTR = &string;
	std::string& stringREF = string;

	std::cout	<< "=> &string    : " << &string	<< "\n"
				<< "=> stringPTR  : " << stringPTR	<< "\n"
				<< "=> &stringREF : " << &stringREF	<< "\n\n"

				<< "=> string     : " << string		<< "\n"
				<< "=> *stringPTR : " << *stringPTR	<< "\n"
				<< "=> stringREF  : " << stringREF	<< "\n"

				<< std::endl;
}