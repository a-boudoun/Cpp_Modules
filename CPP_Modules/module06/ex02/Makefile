NAME = identify
HEADER = identify.hpp
FLAGS = -Wall -Wextra -Werror -std=c++98
C = c++

SRC = main.cpp Identify.cpp

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp $(HEADER)
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
