##
# Project Title
#
# @file
# @version 0.1

NAME = ex03
CC = c++
flags = -Wall -Wextra -Werror -std=c++98
FILES = \
		main.cpp
OFILES = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) $(FLAGS) $(OFILES) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	echo "COMPILED:" $<

clean:
	rm -f $(OFILES)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

# end
