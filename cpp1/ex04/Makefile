CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

OBJ			= main.o StringReplacer.o

all : strep

strep : $(OBJ)
	$(CXX) $(CXXFLAGS) -o strep $^

StringReplacer.o : StringReplacer.hpp

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f strep

re : fclean all
