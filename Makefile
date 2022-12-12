SRC = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_toupper.c \
	ft_tolower.c \

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
