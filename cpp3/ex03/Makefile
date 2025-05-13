CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

OBJ			= main.o ClapTrap.o ScavTrap.o FragTrap.o DiamondTrap.o

all : diamondtrap

diamondtrap : $(OBJ)
	$(CXX) $(CXXFLAGS) -o diamondtrap $^

ClapTrap.o : ClapTrap.hpp

ScavTrap.o : ScavTrap.hpp

FragTrap.o : FragTrap.hpp

DiamondTrap.o : DiamondTrap.hpp

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f diamondtrap

re : fclean all
