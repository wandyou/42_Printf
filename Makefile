# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/22 16:36:10 by nlafarge          #+#    #+#              #
#    Updated: 2020/05/03 21:39:36 by nlafarge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc # Compilateur
CFLAGS = -Wall -Wextra -Werror # Compilation flags

NAME = a.out # Result file's name


# INCLUDES ----------------------------

MAIN				=	main.c

MAINTEST		= main-test.c

HEADERS			=	headers/ft_printf.h # Header to include

SOURCE_DIR	= srcs

SOURCE			=	ft_printf.c

PARSER			=	parser/ft_parser.c \
							parser/ft_attributes.c \
							parser/ft_conversions.c

LIB					=	lib/ft_memset.c \
							lib/ft_strlen.c \
							lib/ft_simple_atoi.c

BUFFER			= buffer/ft_buffer.c

FILES			= ${SOURCE} ${PARSER} ${BUFFER}
SOURCES			= $(addprefix ${SOURCE_DIR}/, ${FILES}) ${LIB}


# MAGIC --------------------------------

all : $(NAME)

$(NAME) : 
					@$(CC) $(MAIN) $(SOURCES)

test :
	$(CC) $(MAINTEST) $(SOURCES)

clean : 
					@$(shell rm a.out)

re : clean all

.PHONY : all clean re test

