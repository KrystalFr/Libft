# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: krfranco <krfranco@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 21:17:57 by krfranco          #+#    #+#              #
#    Updated: 2023/11/07 17:14:10 by krfranco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_atoi.c \
			ft_strchr.c \
			ft_strrchr.c \

OBJS	=	${SRCS:.c=.o}
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -f

all:	${NAME}

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:		${OBJS}
		ar rc	${NAME} ${OBJS}

clean:
		${RM} ${OBJS}

fclen: clean
		${RM} ${NAME}

re: fclean all