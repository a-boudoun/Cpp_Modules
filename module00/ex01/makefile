NAME = phonebook
FLAGS = -Wall -Wextra -Werror -std=c++98
C = c++

SRC =  main.cpp PhoneBook.cpp Contact.cpp
OBJ = $(SRC:.cpp=.o)

%.o: %.cpp Contact.hpp PhoneBook.hpp
	$(C) $(FLAGS) -c $<

all: $(NAME)
$(NAME): $(OBJ)
	$(C) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY  : all clean fclean re
