/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 11:56:20 by nlafarge          #+#    #+#             */
/*   Updated: 2020/05/03 21:39:44 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_INCLUDE_H
# define PRINTF_INCLUDE_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <string.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 9999
# endif

typedef struct s_vars
{
  char  buff[BUFFER_SIZE + 1];
  int buff_count;
  int parse_count;
  int tot_chars;
  int zero;
  int minus;
  int width;
  int precision;
  int precision_width;
} t_vars;

/* DEBUG */
void  ft_print_struct(t_vars *vars);

/* PROD */
int ft_printf(const char *parse, ...);

void  ft_print_buff(t_vars *vars);
void  ft_add_str_to_buff(t_vars *vars, char *str);
void  ft_add_char_to_buff(t_vars *vars, char c);

int  ft_parser(char *parse, va_list ap, t_vars *vars);
void  ft_init_struct_parse(t_vars *vars);

void handle_attributes_zero(t_vars *vars);

int is_conversion(char c);

void	*ft_memset(void *b, int c, size_t len);
size_t	ft_strlen(const char *str);
int		ft_simple_atoi(char *parse, int *parse_count);

#endif