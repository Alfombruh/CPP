NAME = Abstract
CC = clang++
CFLAGS = -Werror -Wall -Wextra #-fsanitize=address -g3
FILES = Animal \
		Cat		\
		Dog		\
		Brain	\
		main
SRCS = $(addsuffix .cpp,$(FILES))
OBJS = $(addsuffix .o,$(FILES))
INCLUDES = Animal.hpp	\
		   Cat.hpp		\
		   Dog.hpp		\
		   Brain.hpp

all: $(NAME)

.cpp.o: $(SRCS)
	$(CC) $(CFLAGS) -c $^ -o $@

$(NAME): $(OBJS) $(INCLUDES)
	$(CC) $(CFLAGS)  $(OBJS) -o $(NAME)

clean:
	rm -rf *.dSYM
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all .cpp.o clean fclean re
