/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 11:18:04 by nlafarge          #+#    #+#             */
/*   Updated: 2020/05/16 05:25:11 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void  ft_init_struct(t_vars *vars)
{
  vars->buff_count = 0; // buf_count
  vars->parse_count = 0; // i
  vars->tot_chars = 0; // ret
	vars->width = 0;
	vars->precision = 0;
	vars->precision_width = 0;
	vars->precision_parsing = 0;
	vars->conversion = 0; // convert
	vars->minus = 0;
	vars->zero = 0;
	vars->plus = 0;
	vars->space = 0;
	vars->conversion_len = 0; // len
	vars->space_len = 0; // sp_len
	vars->is_int = 0;
	vars->tmp_var = 0; // n
  vars->unsigned_var = 0; // u
}

int   ft_printf(const char *parse, ...)
{
  t_vars vars;
  va_list ap;

  ft_init_struct(&vars);
  va_start(ap, parse);

  if (!parse)
    return (-1);
  while (parse[vars.parse_count])
  {
    if (parse[vars.parse_count] == '%')
    {
      if (parse[vars.parse_count + 1] == '\0')
        break ;
      if (ft_is_flag(parse[vars.parse_count + 1]))
      {
        // if (!ft_parser((char *)parse, ap, &vars))
        //   return (-1);
        ft_parser((char *)parse, ap, &vars);
      }
    }
    else
      ft_add_char_to_buff(&vars, parse[vars.parse_count]);
    vars.parse_count++;
  }
  va_end(ap);
  ft_print_buff(&vars);
  return (vars.tot_chars);
}
