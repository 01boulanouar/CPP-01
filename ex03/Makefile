NAME = UnnecessaryViolence

CC = c++
CFLAGS = -Wall -Wextra -Werror -pedantic -std=c++98

RM = rm -f

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJ = $(SRC:.cpp=.o)

%.o : %.cpp Weapon.hpp HumanA.hpp HumanB.hpp
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: clean
