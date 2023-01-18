NAME = ex04
CC = c++
flags = -Wall -Wextra -Werror -std=c++98
FILES = \
		Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp \
		main.cpp
OFILES = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) $(FLAGS) $(OFILES) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	echo "COMPILED:" $<
