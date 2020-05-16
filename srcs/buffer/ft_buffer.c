/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 07:34:37 by nlafarge          #+#    #+#             */
/*   Updated: 2020/05/15 17:22:34 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

void  ft_print_buff(t_vars *vars)
{
  write(1, vars->buff, vars->buff_count);
  vars->tot_chars += vars->buff_count;
  vars->buff_count = 0;
  ft_memset(vars->buff, 0, ft_strlen(vars->buff));
}

void  ft_add_str_to_buff(t_vars *vars, char *str)
{
  int i;

  i = 0;
  while (str[i])
  {
    vars->buff[vars->buff_count] = str[i];
    vars->buff_count++;
    if (vars->buff_count == BUFFER_SIZE)
      ft_print_buff(vars);
    i++;
  }
}

void  ft_add_char_to_buff(t_vars *vars, char c)
{
  vars->buff[vars->buff_count] = c;
  vars->buff_count++;
  if (vars->buff_count == BUFFER_SIZE)
    ft_print_buff(vars);
}