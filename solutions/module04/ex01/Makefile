NAME = Animal
HEADER = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp
FLAGS = -Wall -Wextra -Werror -std=c++98
C = c++

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

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
