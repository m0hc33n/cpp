CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

OBJ			= main.o HumanA.o HumanB.o Weapon.o

all : battle

battle : $(OBJ)
	$(CXX) $(CXXFLAGS) -o battle $^

HumanA.o : HumanA.hpp
HumanB.o : HumanB.hpp
Weapon.o : Weapon.hpp

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f battle

re : fclean all
