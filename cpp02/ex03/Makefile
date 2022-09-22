NAME = BSP
CC = clang++
CFLAGS = -Werror -Wall -Wextra -g3 -fsanitize=address
FILES = main	\
		Fixed	\
		Point	\
		bsp	
SRCS = $(addsuffix .cpp,$(FILES))
OBJS = $(addsuffix .o,$(FILES))

all: $(NAME)

.cpp.o: $(SRCS)
	$(CC) $(CFLAGS) -c $^ -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)	*.dSYM

re: fclean all

.PHONY: all .cpp.o clean fclean re
