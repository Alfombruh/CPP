NAME = RPN
CC = c++
CFLAGS = -Werror -Wextra -Wall -std=c++98 -fsanitize=address -g3
FILES = main \
		RPN
SRCS = $(addsuffix .cpp,$(FILES))
OBJS = $(addsuffix .o,$(FILES))

all: $(NAME)

.cpp.o: $(SRCS)
	$(CC) $(CFLAGS) -c $^ -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -rf *.dSYM
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

exe: all 
	@echo "\033[1;97mexpected result: 42\033[0;0m"
	./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
	@echo 
	@echo "\033[1;97mexpected result: 42\033[0;0m"
	./RPN "9 8 * 4 * 4 / 2 + 9 - 8 - 8 - 1 - 6 -"
	@echo 
	@echo "\033[1;97mexpected result: 15\033[0;0m"
	./RPN "1 2 * 2 / 2 + 5 * 6 - 1 3 * - 4 5 * * 8 /"
	@echo 
	@echo "\033[1;97mexpected result: 204.5 \033[0;0m"
	./RPN "4 9 5 3 1 1 + / + * +  6 4 9 1 1 4 * - * + - + 8 2 7 4 3 8 * *  + + + +"
	@echo 
	@echo "\033[1;97mexpected result: Error,( bad \033[0;0m"
	./RPN "(1 + 1)"
	@echo 
	@echo "\033[1;97mexpected result: Cannot divide by 0\033[0;0m"
	./RPN "4 0 /"
	@echo 
	@echo "\033[1;97mexpected result: Wrong syntaxis\033[0;0m"
	./RPN "4 A +"
	@echo 
	@echo "\033[1;97mexpected result: Too many numbers 0\033[0;0m"
	./RPN "3 3 3 +"
	@echo 
	@echo "\033[1;97mexpected result: Error 0\033[0;0m"
	./RPN "3 A 4 0 / 2.5 3.5 + 10 $ +"

.PHONY: all clean fclean re exe