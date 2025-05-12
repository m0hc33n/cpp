CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

OBJ			= main.o

all : string

string : $(OBJ)
	$(CXX) $(CXXFLAGS) -o string $^

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f string

re : fclean all
