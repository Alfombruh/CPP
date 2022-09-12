NAME = replace
CC = clang++
CFLAGS = -Werror -Wall -Wextra -fsanitize=address
FILES = main
SRCS = $(addsuffix .cpp,$(FILES))
OBJS = $(addsuffix .o,$(FILES))

.cpp.o:	$(SRCS)
	$(CC) $(CFLAGS) -c $^ -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -rf $(OBJS) *.replace

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
