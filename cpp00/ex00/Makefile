NAME = Megaphone
CC = clang++
CPPFLAGS = -Werror -Wall -Wextra -fsanitize=address -g3
FILE = megaphone

SRCS = $(addsuffix .cpp,$(FILE))
OBJS = $(addsuffix .o,$(FILE))

.cpp.o: $(SRCS)
	$(CC) $(CPPFLAGS) -c $(SRCS) -o $(OBJS)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: .cpp.o all clean fclean re
