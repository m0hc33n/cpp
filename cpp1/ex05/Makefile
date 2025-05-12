CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

OBJ			= main.o Harl.o

all : harl

harl : $(OBJ)
	$(CXX) $(CXXFLAGS) -o harl $^

Harl.o : Harl.hpp

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f harl

re : fclean all
