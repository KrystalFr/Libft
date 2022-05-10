NAME	=	libft.a
DYNAMIC	=	$(NAME:.a=.so)

SRC		=	ft_isalpha.c \
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
			ft_strncmp.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strdup.c \
			ft_strnstr.c \
			ft_putendl_fd.c \
			ft_striteri.c \
			ft_substr.c

OBJ		=	$(SRC:.c=.o)

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror

all: $(NAME)

so: $(DYNAMIC) clean

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(DYNAMIC): $(OBJ)
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	$(CC) -nostartfiles -shared -o libft.so $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f $(DYNAMIC)

re: fclean all

.PHONY: all so clean fclean re
