CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

OBJ			= tests.o Account.o

all : test

test : $(OBJ)
	$(CXX) $(CXXFLAGS) -o test $^

Account.o : Account.hpp

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f test

re : fclean all