NAME = PmergeMe
CC = c++
CFLAGS = -Werror -Wall -Wextra -MD -std=c++98 -fsanitize=address -g3
FILES = main	\
		PmergeMe	

SRCS = $(addsuffix .cpp, $(FILES))
OBJS = $(addsuffix .o, $(FILES))
LIBS = $(addsuffix .d, $(FILES))

all: $(NAME)

.cpp.o: $(SRCS)
	$(CC) $(CFLAGS) -c $^ -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

clean: 
	rm -rf *.dSYM
	rm -rf $(OBJS) $(LIBS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re