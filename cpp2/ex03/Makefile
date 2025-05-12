CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

OBJ			= main.o Fixed.o Point.o bsp.o

all : bsp

bsp : $(OBJ)
	$(CXX) $(CXXFLAGS) -o bsp $^

Fixed.o : Fixed.hpp

Point.o : Point.hpp

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f bsp

re : fclean all
