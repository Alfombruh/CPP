NAME = btc
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3
FILES = BitcoinExchange \
		main

SRCS = $(addsuffix .cpp, $(FILES))
OBJS = $(addsuffix .o, $(FILES))

all: $(NAME)

.cpp.o: $(SRCS)
	$(CC) $(CFLAGS) -c $^ -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

clean:
	rm -rf *.dSYM
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

exe: re 
	./$(NAME) test.txt

.PHONY: all clean fclean re exe