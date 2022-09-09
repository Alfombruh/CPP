NAME = PhoneBook
CC = clang++
CPPFLAGS = -Werror -Wall -Wextra -fsanitize=address -g3
FILES = main \
		Contact

INCLUDES = Contact.hpp
SRCS = $(addsuffix .cpp,$(FILES))
OBJS = $(addsuffix .o,$(FILES))

.cpp.o: $(SRCS) 
	$(CC) $(CPPFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	$(CC) $(CPPFLAGS) $(OBJS) -o $@

clean: 
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: .cpp.o all clean fclean re
