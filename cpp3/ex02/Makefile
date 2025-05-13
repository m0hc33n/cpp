CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

OBJ			= main.o ClapTrap.o ScavTrap.o FragTrap.o

all : fragtrap

claptrap : $(OBJ)
	$(CXX) $(CXXFLAGS) -o fragtrap $^

ClapTrap.o : ClapTrap.hpp

ScavTrap.o : ScavTrap.hpp

FragTrap.o : FragTrap.hpp

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f fragtrap

re : fclean all
