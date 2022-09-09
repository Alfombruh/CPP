NAME	=	HTIB
CC		= 	clang++
CFLAGS	=	-Werror -Wextra -Wall -fsanitize=address -g3
FILES	=	main 
SRCS	= 	$(addsuffix .cpp,$(FILES))
OBJS	= 	$(addsuffix .o,$(FILES))

.cpp.o: $(SRCS)
	$(CC) $(CFLAGS) -c $^ -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
