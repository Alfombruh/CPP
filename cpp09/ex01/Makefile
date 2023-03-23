NAME = RPN
CC = c++
CFLAGS = -Werror -Wextra -Wall -std=c++98 -fsanitize=address -g3
FILES = main \
		RPN
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
	rm -rf $(NAME)

re: fclean all

exe: all 
	./RPN 1 2 "*" 2 / 2 + 5 "*" 6 - 1 3 "*" - 4 5 "*" "*" 8 /

.PHONY: all clean fclean re exe