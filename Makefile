NAME	= libft.a

CC	= cc

SRCS	= $(wildcard *.c)

OBJCS	= $(SRCS:.c=.o)

DEPS	= libft.h

CFLAGS	= -Wall -Wextra -Werror -MMD

.PHONY	=	all re clean fclean

-include $(wildcard *.d)

all: $(NAME)

$(NAME)	: $(OBJCS)
	ar -crs $(NAME) $(OBJCS)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -rf $(OBJCS) *.d

fclean: clean
	rm $(NAME)

re: fclean all