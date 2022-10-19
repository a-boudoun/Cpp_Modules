NAME = replace
FLAGS = -Wall -Wextra -Werror -std=c++98
C = c++

SRC = main.cpp Replace.cpp

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp
	$(C) $(FLAGS) -c $<

all: $(NAME)
$(NAME): $(OBJ)
	$(C) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME) *.replace

re: fclean all

.PHONY  : all clean fclean re
