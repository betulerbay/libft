SRC = $(wildcard ft_b*.c ft_i*.c ft_t*.c ft_s*.c ft_m*.c ft_a*.c ft_c*.c ft_*_fd.c)

OBJS = $(SRC:%.c=%.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

all: $(NAME)

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<

$(NAME): $(OBJS) 
	ar -rcs $(NAME) $(OBJS)

clean: 
	rm -rf $(OBJS) 

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all re 
#fonksiyon: koşul
#		targetk
