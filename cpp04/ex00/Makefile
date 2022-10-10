NAME = Polymorphism
CC = clang++
CFLAGS = -Werror -Wall -Wextra -fsanitize=address -g3
FILES = Animal \
		Cat		\
		Dog		\
		WrongAnimal	\
		WrongCat	\
		main	
SRCS = $(addsuffix .cpp,$(FILES))
OBJS = $(addsuffix .o,$(FILES))
INCLUDES = Animal.hpp \
		   Cat.hpp	\
		   Dog.hpp	\
		   WrongAnimal.hpp	\
		   WrongCat.hpp

all: $(NAME)

.cpp.o: $(SRCS)
	$(CC) $(CFLAGS) -c $^ -o $@

$(NAME): $(OBJS) $(INCLUDES)
	$(CC) $(CFLAGS) $(OBJS) -o $@

clean:
	rm -rf *.dSYM
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all .cpp.o clean fclean re
