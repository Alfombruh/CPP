NAME = Span
CC = clang++
CFLAGS = -Werror -Wall -Wextra -g3 -fsanitize=address
FILES = main	\
		span
SRCS = $(addsuffix .cpp,$(FILES))
OBJS = $(addsuffix .o,$(FILES))
INCLUDES = span.hpp


.cpp.o: $(SRCS)
	$(CC) $(CFLAGS) -c $^ -o $@

all:$(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	$(CC) $(CFLAGS) $(OBJS) -o $@

clean:
	rm -rf *.dSYM
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
