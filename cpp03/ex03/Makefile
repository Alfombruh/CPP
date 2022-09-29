NAME = DiamondTrap
CC = clang++
CFLAGS = -Werror -Wall -Wextra -fsanitize=address -g3
FILES = ClapTrap	\
		ScavTrap	\
		FragTrap	\
		DiamondTrap	\
		main
SRCS = $(addsuffix .cpp,$(FILES))
OBJS = $(addsuffix .o,$(FILES))
INCLUDES = ClapTrap.hpp	\
		   ScavTrap.hpp	\
		   FragTrap.hpp	\
		   DiamondTrap.hpp

all: $(NAME)

.cpp.o: $(SRCS)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS) $(INCLUDES)
	$(CC) $(CFLAGS) $(OBJS) -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
