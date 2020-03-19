# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/22 16:36:10 by nlafarge          #+#    #+#              #
#    Updated: 2020/03/19 16:27:07 by nlafarge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc # Compilateur
CFLAGS = -Wall -Wextra -Werror # Compilation flags

NAME = a.out # Result file's name


# INCLUDES ----------------------------

MAIN = 		main.c # Include main for tests

HEADERS = headers/ft_printf.h # Header to include

SOURCES = srcs/ft_printf.c \
					srcs/ft_parser.c

TOOLS = 	tools/ft_memset.c \
					tools/ft_strlen.c

# MAGIC --------------------------------

all : $(NAME)

$(NAME) : 
					@$(CC) $(CFLAGS) $(MAIN) $(SOURCES) $(TOOLS)

clean : 
					@$(shell rm a.out)

