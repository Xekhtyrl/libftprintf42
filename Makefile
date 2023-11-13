NAME = libftprintf.a

MY_SOURCES =	ft_printf.c			\
				ft_printf_utils.c	\
				ft_printf_utils2.c

MY_OBJECTS = $(MY_SOURCES:.c=.o)

LIBFT = ./libft

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): makelibft $(MY_OBJECTS)
	ar rc $(NAME) $(MY_OBJECTS)

makelibft:
	make -C $(LIBFT)
	cp $(LIBFT)/libft.a .
	mv libft.a $(NAME)

%.o:	%.c
	gcc ${CFLAGS} -I . -c $< -o $@

clean:
	rm -rf $(MY_OBJECTS)
	make clean -C $(LIBFT)

fclean: clean
	rm -rf $(NAME)
	rm -rf $(LIBFT)/libft.a

re: fclean all

.PHONY: all clean fclean re