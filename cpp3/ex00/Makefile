CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

OBJ			= main.o ClapTrap.o

all : claptrap

claptrap : $(OBJ)
	$(CXX) $(CXXFLAGS) -o claptrap $^

ClapTrap.o : ClapTrap.hpp

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f claptrap

re : fclean all
