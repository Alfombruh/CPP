NAME = Conversion
CC = clang++
CFLAGS = -Werror -Wall -Wextra -g3 -fsanitize=address
FILES = main \
		Conversion
SRCS = $(addsuffix .cpp,$(FILES))
OBJS = $(addsuffix .o,$(FILES))
INCLUDES = Conversion.hpp \

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

test: $(NAME)
	@echo ""
	./Conversion 2147483647
	@echo ""
	./Conversion -2147483648
	@echo ""
	./Conversion 2147483648
	@echo ""
	./Conversion -2147483649
	@echo ""
	./Conversion 0
	@echo ""
	./Conversion 31
	@echo ""
	./Conversion 32
	@echo ""
	./Conversion 126
	@echo ""
	./Conversion 127
	@echo ""
	./Conversion nan
	@echo ""
	./Conversion nanf
	@echo ""
	./Conversion inf
	@echo ""
	./Conversion -inf
	@echo ""
	./Conversion inff
	@echo ""
	./Conversion -inff
	@echo ""


.PHONY: all clean fclean re
