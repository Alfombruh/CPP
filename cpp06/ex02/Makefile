NAME = Dynamic
CC = clang++
CFLAGS = -Werror -Wall -Wextra -g3 -fsanitize=address 
FILES = main
SRCS = $(addsuffix .cpp,$(FILES))
OBJS = $(addsuffix .o,$(FILES))

all:$(NAME)

.cpp.o:$(SRCS)
	$(CC) $(CFLAGS) -c $^ -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean: 
	rm -rf $(OBJS)

fclean: clean
	rm -rf *.dSYM
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
