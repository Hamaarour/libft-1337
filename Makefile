# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hamaarou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/14 14:48:35 by hamaarou          #+#    #+#              #
#    Updated: 2022/10/23 13:20:27 by hamaarou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
CFLAGS=-Wall -Wextra -Werror
SRC= ft_isascii.c ft_memcpy.c ft_split.c ft_strlen.c ft_tolower.c \
		ft_isdigit.c ft_memmove.c ft_strchr.c ft_strmapi.c ft_toupper.c \
		ft_atoi.c ft_isprint.c ft_memset.c ft_strdup.c ft_strncmp.c libft.a \
		ft_bzero.c ft_itoa.c ft_putchar_fd.c ft_striteri.c ft_strnstr.c libft.h \
		ft_calloc.c ft_lstnew.c ft_putendl_fd.c ft_strjoin.c ft_strrchr.c todo \
		ft_isalnum.c ft_memchr.c ft_putnbr_fd.c  ft_strlcat.c ft_strtrim.c \
		ft_isalpha.c ft_memcmp.c ft_putstr_fd.c  ft_strlcpy.c ft_substr.c

OBJ=$(SRC:.c=.o)
NAME=libft.a

.PHONY=all clean fclean re

all:$(NAME)

$(NAME):$(OBJ)
	ar rcs $(NAME) $(OBJ)

$(LIB):$(OBJ)
	ar -csr $(LIB) *.o

%.o:%.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	@rm -rf $(OBJ)

fclean:clean
	@rm -rf $(NAME)
re:fclean all
#fclean $(NAME)



