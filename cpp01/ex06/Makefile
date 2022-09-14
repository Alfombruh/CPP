NAME = karenFilter
CC = clang++
CFLAGS = -Werror -Wall -Wextra -fsanitize=address -g3
FILES = main	\
		Karen
SRCS = $(addsuffix .cpp,$(FILES))
OBJS = $(addsuffix .o,$(FILES))

.cpp.o: $(SRCS)
	$(CC) $(CFLAGS) -c $^ -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@
	@printf "\e[1;92m./karenFilter \"level\"\n"
	@printf "to display levels \"make lvls\"\033[0;0m\n"

lvls:
	@printf "\e[1;94m[ LEVELS ]\n1\tDEBUG\n2\tINFO\n3\tWARNING\n4\tERROR\n\033[0;0m"

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all lvls clean fclean re
