NAME = Interface
CC = clang++
CFLAGS = -Werror -Wall -Wextra -std=c++98 -fsanitize=address -g3
FILE = AMateria \
	   Ice	\
	   Cure	\
	   main
SRCS = $(addsuffix .cpp,$(FILES))
OBJS = $(addsuffix .o,$(FILES))
INCLUDES = AMateria \
		   Ice	\
		   Cure	

all: $(NAME)

.cpp.o: $(SRCS)
	$(CC) $(CFLAGS) -c $^ -o $@

$(NAME): $(OBJS) $(INCLUDES)
	$(CC) $(CLAGS) $(OBJS) -o $@

clean: 
	rm -rf $(OBJS)

fclean: clean
	rm -rf *.dSYM $(NAME)

re: fclean all

.PHONY: all clean fclean re
