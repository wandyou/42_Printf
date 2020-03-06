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

CC          =   gcc
CFLAGS      =   -Wall -Wextra -Werror

NAME        =   libftprintf.a

HEADERS     =   ft_printf.h

SOURCES			=		ft_printf.c

OBJECTS		=	$(SOURCES:.c=.o)

# MAIN part --------------------------------------------------------

all : $(NAME)

$(NAME) : Libft/libft.a $(OBJECTS)
	@ar -rcs $(NAME) $(OBJECTS) $(shell find Libft/ -name '*.o')
	@echo && echo $(GREEN) "[√]     [Extended Library Successfully Compiled!]"
	@echo $(WHITE)

Libft/libft.a :
	@make -C Libft

%.o: %.c $(HEADERS)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiling => " $<

DEL = /bin/rm -rf

clean :
	@$(DEL) $(shell find . -name '*.o')
	@make clean -C Libft/

fclean : clean
	@$(DEL) $(NAME)
	@make fclean -C Libft/

re : fclean all

GREEN = "\033[1;32m"
WHITE = "\033[1;37m"

nh :
	@echo && echo $(GREEN) "Checking Norme -- Header Files:" && echo $(WHITE);
	@norminette $(shell find . -name '*.h')

nc :
	@echo && echo $(GREEN) "Checking Norme -- Source Files:" && echo $(WHITE);
	@norminette $(shell find . -name '*.c')

na : nh nc

.PHONY : all clean fclean re nc nh na