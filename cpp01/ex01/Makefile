NAME= Horde
CC= clang++
CFLAGS = -Werror -Wall -Wextra -fsanitize=address -g3
FILES = main \
		Zombie \
		ZombieHorde
INCLUDES = Zombie.hpp
SRCS = $(addsuffix .cpp,$(FILES))
OBJS = $(addsuffix .o,$(FILES))

.cpp.o: $(SRCS)
	$(CC) $(CFLGAS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	$(CC) $(CFLAGS) $(OBJS) -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
