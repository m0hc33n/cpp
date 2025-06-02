CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

all : megaphone

megaphone : megaphone.o
	$(CXX) $(CXXFLAGS) -o megaphone $<

clean :
	rm -f megaphone.o

fclean : clean
	rm -f megaphone

re : fclean all

.PHONY : clean