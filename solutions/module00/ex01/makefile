NAME = phoneBook
FLAGS = -Wall -Wextra -Werror
C = clang++

SRC =  main.cpp PhoneBook.cpp Contact.cpp
OBJ = $(SRC:.cpp=.o)

%.o: %.cpp
	@$(C) $(FLAGS) -c $<

all: $(NAME)
$(NAME):
	@$(C) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY  : all clean fclean re
