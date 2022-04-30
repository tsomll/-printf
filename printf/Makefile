NAME    =  libftprintf.a

SRCS   = ft_lower16.c	ft_percent.c	\
	ft_printf.c	ft_putchar.c	\
	ft_putnbr.c	ft_putstr.c	\
	ft_undecimal.c	ft_upp16.c	\
	ft_pointer.c \

HEADER =  ft_printf.h

OBJS   =  $(SRCS:%.c=%.o)

CC    =  gcc

FLAGS  =  -Werror -Wall -Wextra -I $(HEADER)

.PHONY :  all clean fclean re bonus

all       :  $(NAME)

$(NAME)    :  $(OBJS) $(HEADER)
	ar rcs $(NAME) $?

%.o       :  %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean  :
	rm -f $(OBJS)

fclean :  clean
	rm -f $(NAME)

re    :  fclean all