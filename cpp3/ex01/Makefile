CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

OBJ			= main.o ClapTrap.o ScavTrap.o

all : scavtrap

claptrap : $(OBJ)
	$(CXX) $(CXXFLAGS) -o scavtrap $^

ClapTrap.o : ClapTrap.hpp

ScavTrap.o : ScavTrap.hpp

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f scavtrap

re : fclean all
