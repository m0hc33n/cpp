CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

OBJ			= main.o Zombie.o zombieHorde.o

all : zombie

zombie : $(OBJ)
	$(CXX) $(CXXFLAGS) -o zombie $^

Zombie.o : Zombie.hpp

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f zombie

re : fclean all
