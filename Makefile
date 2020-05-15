# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/22 16:36:10 by nlafarge          #+#    #+#              #
#    Updated: 2020/05/15 15:21:29 by nlafarge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc # Compilateur
CFLAGS = -Wall -Wextra -Werror # Compilation flags
RM = rm -f

NAME = libftprintf.a # Result file's name

SOURCE_DIR	= srcs
HEADER			=	headers

# INCLUDES ----------------------------

SOURCE			=	ft_printf.c

PARSER			=	parser/ft_parser.c \
							parser/ft_attributes.c

HANDLERS		= handlers/ft_handlers.c \
							handlers/ft_handle_padding.c \
							handlers/ft_handle_join.c \
							handlers/ft_handle_sign.c

CONVERTERS 	= converters/ft_converter_c.c \
							converters/ft_converter_str.c \
							converters/ft_converter_p.c \
							converters/ft_converter_int.c \
							converters/ft_converter_uint.c \
							converters/ft_converter_hex.c

LIB					=	lib/ft_simple_atoi.c \
							lib/ft_c_to_str.c \
							lib/ft_strdup_width.c \
							lib/ft_itoa_hex.c \
							lib/ft_num_precision.c \
							lib/ft_simple_itoa.c \
							lib/ft_intlen.c \
							lib/ft_simple_uitoa.c \
							lib/ft_uintlen.c

BUFFER			= buffer/ft_buffer.c

FILES				= ${SOURCE} ${PARSER} ${BUFFER} ${HANDLERS} ${CONVERTERS}
SOURCES			= $(addprefix ${SOURCE_DIR}/, ${FILES}) ${LIB}

OBJS = ${SOURCES:.c=.o}

LIBFT 			= libft

# MAGIC --------------------------------

all : $(NAME)

$(NAME) : ${OBJS}
					@make -C $(LIBFT)
					@cp libft/libft.a ./$(NAME)
					@ar -rcs ${NAME} ${OBJS}

bonus:			${NAME}

%.o: %.c
				@${CC} ${CFLAGS} -I ${HEADER} -o $@ -c $<

clean:
				@${RM} ${OBJS}
				@make clean -C $(LIBFT)

fclean:			clean
				@${RM} ${NAME}
				@make fclean -C $(LIBFT)

re:				fclean all

.PHONY: 		all fclean clean re

