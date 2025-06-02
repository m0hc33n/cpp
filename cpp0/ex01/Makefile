CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

OBJ			= main.o PhoneBook.o Contact.o

all : phonebook

phonebook : $(OBJ)
	$(CXX) $(CXXFLAGS) -o phonebook $^

PhoneBook.o : PhoneBook.hpp

Contact.o : Contact.hpp

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f phonebook

re : fclean all

.PHONY : clean