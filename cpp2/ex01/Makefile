CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

OBJ			= main.o Fixed.o

all : fixed

fixed : $(OBJ)
	$(CXX) $(CXXFLAGS) -o fixed $^

Fixed.o : Fixed.hpp

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f fixed

re : fclean all
