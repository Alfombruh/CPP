NAME = Interface
CC = clang++
CFLAGS = -Werror -Wall -Wextra -std=c++98 -g3 -fsanitize=address
FILES = main \
		AMateria \
	   	Character \
	   	Ice	\
	   	Cure	\
	   	MateriaSource 
SRCS = $(addsuffix .cpp,$(FILES))
OBJS = $(addsuffix .o,$(FILES))
INCLUDES =	AMateria.hpp \
			MateriaSource.hpp \
			Character \
			Ice.hpp	\
			Cure.hpp 

all: $(NAME)

.cpp.o: $(SRCS)
	$(CC) $(CFLAGS) -c $^ -o $@

$(NAME): $(OBJS) 
	$(CC) $(CFLAGS) $(OBJS) -o $@

clean: 
	rm -rf $(OBJS)

fclean: clean
	rm -rf *.dSYM $(NAME)

re: fclean all

.PHONY: all clean fclean re
