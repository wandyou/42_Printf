/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 11:18:04 by nlafarge          #+#    #+#             */
/*   Updated: 2020/03/11 20:04:05 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

void ft_init_struct(t_vars *vars)
{
  vars->parse_count = 0;
  vars->buff_count = 0;
}

void ft_print_buff(t_vars *vars)
{
  write(1, vars->buff, vars->buff_count);
  vars->buff_count = 0;
  ft_memset(vars->buff, 0, ft_strlen(vars->buff));
}

void ft_add_to_buff(t_vars *vars, char c)
{
  if (vars->buff_count == BUFFER_SIZE)
    ft_print_buff(vars);

  vars->buff[vars->buff_count] = c;
  vars->buff_count++;
}

int ft_printf(const char *parse, ...)
{
  t_vars vars;
  // va_list ap;

  ft_init_struct(&vars);
  // va_start(ap, parse);
  
  while (parse[vars.parse_count])
  {
    if (parse[vars.parse_count] == '%')
    {
      
    }
    else
      ft_add_to_buff(&vars, parse[vars.parse_count]); 
    vars.parse_count++;
  }

  ft_print_buff(&vars);
  return (0);
}