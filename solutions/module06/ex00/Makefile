NAME = covert
HEADER = Bureaucrat.hpp Convert.hpp Convert.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
C = c++

SRC = main.cpp Bureaucrat.cpp Convert.cpp

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
