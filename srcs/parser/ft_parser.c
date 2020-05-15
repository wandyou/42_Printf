/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/19 16:26:08 by nlafarge          #+#    #+#             */
/*   Updated: 2020/05/15 15:24:47 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/ft_printf.h"

void  ft_init_struct_parse(t_vars *vars)
{
  vars->zero = 0;
  vars->minus = 0;
  vars->width = 0;
  vars->precision = 0;
  vars->precision_parsing = 0;
  vars->precision_width = 0;
  vars->conversion = 0;
  vars->conversion_len = 0;
  vars->space_len = 0;
  vars->tmp_var = 0;
  vars->is_int = 0;
}

void ft_init_precision(t_vars *vars)
{
  vars->precision = 1;
  vars->precision_parsing = 1;
  vars->precision_width = 0;
}

int is_conversion(char c)
{
  if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || c == 'u' || c == 'x' || c == 'X' || c == '%')
    return 1;
  else
    return 0;
}

int ft_is_flag(char c)
{
  if (is_conversion(c) || c == '-' || c == ' ' || c == '.' || c == '+' || c == '*' || (c >= '0' && c <= '9'))
    return 1;
  else
    return 0;
}

int  ft_parser(char *parse, va_list ap, t_vars *vars)
{
  char c;

  ft_init_struct_parse(vars);
  vars->parse_count++;
  while (!is_conversion(parse[vars->parse_count]) && parse[vars->parse_count] != '\0')
  {
    c = parse[vars->parse_count];
    if (c == '*')
    {
      if (vars->precision)
        vars->precision_width = va_arg(ap, int);
      else
        vars->width = va_arg(ap, int);
    }
    else if (c == '0' && !vars->minus && !vars->precision)
      vars->zero = 1;
    else if (c > '0' && c <= '9' && !vars->precision)
      vars->width = ft_simple_atoi(parse, &vars->parse_count);
    else if (c >= '0' && c <= '9' && vars->precision)
      vars->precision_width = ft_simple_atoi(parse, &vars->parse_count);
    else if (c == '-')
    {
      vars->zero = 0;
      vars->minus = 1;
    }
    else if (c == '.')
      ft_init_precision(vars);
    else if (c == ' ')
      vars->space = 1;
    else if (c == '+')
      vars->plus = 1;
    
    
    vars->parse_count++;
  }
  if (vars->width < 0)
  {
    vars->minus = 1;
    vars->zero = 0;
    vars->width = -vars->width;
  }
  if (vars->precision_width < 0)
    vars->precision = 0;
  if (vars->precision && vars->precision_width >= 0)
    vars->zero = 0;
  vars->conversion = parse[vars->parse_count];
  
  ft_handlers(ap, vars);

  //ft_print_struct(vars);

  return (1);
}