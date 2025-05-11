#include <iostream>
#include <string>
#include "StringReplacer.hpp"



int main(int ac, char **av)
{
	if (ac != 4) {
		std::cout << "[ii] Usage:\n\t" << av[0] << " [filename] [search] [replace]" << std::endl;
		return 1;
	}
	StringReplacer sr(av[1], av[2], av[3]);
	sr.replace();
}

