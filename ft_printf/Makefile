
SRCS =  ft_putnbr.c ft_printf.c ft_putchar.c ft_putstr.c ft_unsinl.c ft_hex_des.c ft_uphex_des.c
 

OBJS = ${SRCS:.c=.o}
CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a


all: ${NAME}


${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}
	
%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) 

fclean : clean
	rm -f ${NAME}

re : fclean all
