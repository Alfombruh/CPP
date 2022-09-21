NAME = Fixed
CC = clang++
CFLAGS = -Werror -Wall -Wextra -std=c++98 #-fsanitize=address -g3
INCLUDE = Fixed.hpp
FILES = main	\
		Fixed	
SRCS = $(addsuffix .cpp,$(FILES))
OBJS = $(addsuffix .o,$(FILES))

.cpp.o: $(SRCS)
	$(CC) $(CFLAGS) -c $^ -o $@

all: $(NAME)

$(NAME): $(INCLUDE) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME) *.dSYM

re: fclean all

.PHONY: .cpp.o all clean fclean re $(NAME)
