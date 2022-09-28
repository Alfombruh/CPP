NAME = FragTrap
CC = clang++
CFLAGS = -Werror -Wall -Wextra -std=c++98 -pedantic -fsanitize=address -g3
FILES = ClapTrap	\
		ScavTrap	\
		FragTrap	\
		main
SRCS = $(addsuffix .cpp,$(FILES))
OBJS = $(addsuffix .o,$(FILES))
INCLUDES = ClapTrap.hpp	\
		   ScavTrap.hpp	\
		   FragTrap.hpp	

all: $(NAME)

.cpp.o: $(SRCS)
	$(CC) $(CFLAGS) -c $^ -o $@

$(NAME): $(INCLUDES) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME) *.dSYM

re: fclean all

.PHONY: all .cpp.o clean fclean re
