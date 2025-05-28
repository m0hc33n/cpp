#include <iostream>
#include <string> 
#include <cstring> // strlen
#include <cctype>  // toupper

# define DFL_MSG "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

void megaphone(char *str)
{
	std::string toCap(str);
	size_t		strLen(strlen(str));

	for (size_t i=0; i < strLen; i++) {
		toCap[i] = toupper(toCap[i]);
	}
	std::cout << toCap ;
}

int main(int ac, char **av)
{
	if (ac == 1) {
		std::cout << DFL_MSG << std::endl;
	}
	else
	{
		for (int i=1; i < ac ; i++) {
			if (av[i]) {
				megaphone(av[i]);
			}
		}
		std::cout << std::endl;
	}
}
