# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/22 16:36:10 by nlafarge          #+#    #+#              #
#    Updated: 2020/05/15 03:13:31 by nlafarge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc # Compilateur
CFLAGS = -Wall -Wextra -Werror # Compilation flags

NAME = a.out # Result file's name

SOURCE_DIR	= srcs

# INCLUDES ----------------------------

MAIN				=	main.c

MAINTEST		= main-test.c
TESTS				= tests/tests.c

HEADERS			=	headers/ft_printf.h

SOURCE			=	ft_printf.c

PARSER			=	parser/ft_parser.c \
							parser/ft_attributes.c \
							parser/ft_conversions.c

HANDLERS		= handlers/ft_handlers.c \
							handlers/ft_handle_padding.c \
							handlers/ft_handle_join.c

CONVERTERS 	= converters/ft_converter_c.c \
							converters/ft_converter_str.c \
							converters/ft_converter_p.c \
							converters/ft_converter_int.c

LIB					=	lib/ft_memset.c \
							lib/ft_strlen.c \
							lib/ft_simple_atoi.c \
							lib/ft_c_to_str.c \
							lib/ft_calloc.c \
							lib/ft_bzero.c \
							lib/ft_strdup_width.c \
							lib/ft_itoa_hex.c \
							lib/ft_num_precision.c \
							lib/ft_strdup.c \
							lib/ft_simple_itoa.c \
							lib/ft_intlen.c

BUFFER			= buffer/ft_buffer.c

FILES				= ${TESTS} ${SOURCE} ${PARSER} ${BUFFER} ${HANDLERS} ${CONVERTERS}
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

