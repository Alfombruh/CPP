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
	@printf "\e[32m./replace filename s1 s2\n"
	@printf "changes in filename every s1 for s2\e[0m\n"

clean:
	rm -rf $(OBJS) *.replace

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
