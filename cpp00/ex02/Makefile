NAME = Account
CC = g++
CFLAGS = -Werror -Wextra -Wall -fsanitize=address -g3
FILES = main \
		Account 

INCLUDES = Account.hpp
SRCS = $(addsuffix .cpp,$(FILES))
OBJS = $(addsuffix .o,$(FILES))

.cpp.o: $(SRCS)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	$(CC) $(CFLAGS) $(OBJS) -o $@

clean:
	rm -rfv $(OBJS)

fclean: clean
	rm -rfv $(NAME)

re: fclean all

.PHONY: all clean fclean re
