NAME = btc
HEADER = BitcoinExchange.hpp
FLAGS = -Wall -Wextra -Werror -std=c++98
C = c++

SRC = main.cpp BitcoinExchange.cpp

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