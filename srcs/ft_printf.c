/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 11:18:04 by nlafarge          #+#    #+#             */
/*   Updated: 2020/05/03 21:41:14 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

void  ft_init_struct(t_vars *vars)
{
  vars->parse_count = 0;
  vars->buff_count = 0;
  vars->tot_chars = 0;
}

void  ft_print_struct(t_vars *vars)
{
  printf("[ATTRIBUTES]\n");
  printf("Zéro            = %d\n", vars->zero);
  printf("Minus           = %d\n", vars->minus);
  printf("Width           = %d\n", vars->width);
  printf("Précision       = %d\n", vars->precision);
  printf("Précision width = %d\n", vars->precision_width);
  printf("\n\n");
}

int   ft_printf(const char *parse, ...)
{
  t_vars vars;
  va_list ap;

  ft_init_struct(&vars);
  va_start(ap, parse);

  if (!parse)
    return (0);
  while (parse[vars.parse_count] != '\0')
  {
    if (parse[vars.parse_count + 1] == '\0')
      break ;
    if (parse[vars.parse_count] == '%')
    {
      if (!ft_parser((char *)parse, ap, &vars))
        return (-1);
    }
    else
      ft_add_char_to_buff(&vars, parse[vars.parse_count]);
    vars.parse_count++;
  }
  va_end(ap);
  ft_print_buff(&vars);
  return (vars.tot_chars);
}
