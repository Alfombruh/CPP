NAME = Bureaucrat
CC = clang++
CFLAGS = -Werror -Wall -Wextra -g3 -fsanitize=address
FILES = Bureaucrat	\
		Form		\
		main
SRCS = $(addsuffix .cpp,$(FILES))
OBJS = $(addsuffix .o,$(FILES))
INCLUDES = Bureaucrat.hpp \
		   Form.hpp

all: $(NAME)

.cpp.o: $(SRCS)
	$(CC) $(CFLAGS) -c $^ -o $@

$(NAME): $(OBJS) $(INCLUDES)
	$(CC) $(CFLAGS) $(OBJS) -o $@

clean:
	rm -rf *.dSYM
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
