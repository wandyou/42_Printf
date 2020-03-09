/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_include.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 11:56:20 by nlafarge          #+#    #+#             */
/*   Updated: 2020/03/09 23:11:29 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_INCLUDE_H
# define PRINTF_INCLUDE_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

typedef struct s_maStructure s_maStructure;
struct s_maStructure
{
  char buff[500];
};

int ft_printf(const char *parse);

#endif