# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/22 16:36:10 by nlafarge          #+#    #+#              #
#    Updated: 2020/01/23 11:17:17 by nlafarge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = 

CC = gcc -c
CFLAGS = -Werror -Wall -Wextra
OBJ = $(SRC:.c=.o)
OBJBONUS = $(SRCBONUS:.c=.o)
EXEC = libft.a

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

bonus:
	$(CC) $(CFLAGS) $(SRCBONUS)
	ar rc $(NAME) $(OBJBONUS)
	ranlib $(NAME)

clean:
	rm -rf $(OBJ)
	rm -rf $(OBJBONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all