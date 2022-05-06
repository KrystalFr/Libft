NAME	=	libft.a

SRCS	=	ft_isalpha.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_isascii.c \
			ft_isalnum.c \
			ft_atoi.c \
			ft_strlcpy.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putnbr_fd.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_memset.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strlcat.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c

OBJS	=	$(SRCS:.c=.o)

CC		=	gcc -Wall -Wextra -Werror

all: $(NAME)

.c.o:
	$(CC) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS) libft.h
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: clean all

.PHONY: all clean fclean re
