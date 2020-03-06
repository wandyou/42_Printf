# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/04 13:05:32 by nlafarge          #+#    #+#              #
#    Updated: 2019/11/22 15:12:42 by nlafarge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c \
      ft_bzero.c \
      ft_calloc.c \
      ft_isalnum.c \
      ft_isalpha.c \
      ft_isascii.c \
      ft_isdigit.c \
      ft_isprint.c \
      ft_itoa.c \
      ft_memccpy.c \
      ft_memchr.c \
      ft_memcmp.c \
      ft_memcpy.c \
      ft_memmove.c \
      ft_memset.c \
      ft_putchar_fd.c \
      ft_putendl_fd.c \
      ft_putnbr_fd.c \
      ft_putstr_fd.c \
      ft_split.c \
      ft_strchr.c \
      ft_strdup.c \
      ft_strjoin.c \
      ft_strlcat.c \
      ft_strlcpy.c \
      ft_strlen.c \
      ft_strmapi.c \
      ft_strncmp.c \
      ft_strnstr.c \
      ft_strrchr.c \
      ft_strtrim.c \
      ft_substr.c \
      ft_tolower.c \
      ft_toupper.c

SRCBONUS =  ft_lstnew_bonus.c \
            ft_lstadd_front_bonus.c \
            ft_lstsize_bonus.c \
            ft_lstmap_bonus.c \
            ft_lstlast_bonus.c \
            ft_lstadd_back_bonus.c \
            ft_lstdelone_bonus.c \
            ft_lstclear_bonus.c \
            ft_lstiter_bonus.c

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
