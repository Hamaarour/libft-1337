# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hamaarou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/14 14:48:35 by hamaarou          #+#    #+#              #
#    Updated: 2022/10/19 14:40:59 by hamaarou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
CFLAGS=-Wall -Wextra -Werror
SRC=$(wildcard *.c)
OBJ=$(patsubst %.c, %.o, $(SRC))
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



