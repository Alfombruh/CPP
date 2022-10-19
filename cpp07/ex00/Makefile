NAME = WhatEver
CC = clang++
CFLAGS = -Werror -Wextra -Wall
FILES = main	
SRCS = $(addsuffix .cpp,$(FILES))
OBJS = $(addsuffix .o,$(FILES))
INCLUDES = whatever.hpp

all:$(NAME)

.cpp.o:$(SRCS)
	$(CC) $(CFLAGS) -c $^ -o $@

$(NAME): $(OBJS) $(INCLUDES)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean: 
	rm -rf $(OBJS)

fclean: clean
	rm -rf *.dSYM
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
