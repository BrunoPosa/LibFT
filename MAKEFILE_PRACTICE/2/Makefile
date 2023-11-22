NAME	= libft.a

SRC_DIR	= ./src

SOURCES	= $(wildcard $(SRC_DIR)/*.c)

OBJECTS	= $(SOURCES:$(SRC_DIR)/.c=.o)

DEPS	= libft.h

CFLAGS	= -Wall -Wextra -Werror

CC	= cc

$(NAME): $(OBJECTS)
	ar -crs $(NAME) $(OBJECTS)

$(OBJECTS): $(DEPS)

./%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -o $@ -c $<

.PHONY	= all clean fclean re

all: $(NAME)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm $(NAME)

re: fclean all