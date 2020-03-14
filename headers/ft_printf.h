/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 11:56:20 by nlafarge          #+#    #+#             */
/*   Updated: 2020/03/13 09:08:38 by nlafarge         ###   ########.fr       */
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
  int parse_count;
  int buff_count;
} t_vars;

int ft_printf(const char *parse, ...);
void	*ft_memset(void *b, int c, size_t len);
size_t	ft_strlen(const char *str);

#endif