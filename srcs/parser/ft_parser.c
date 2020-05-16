/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/19 16:26:08 by nlafarge          #+#    #+#             */
/*   Updated: 2020/05/16 05:47:11 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

void  ft_init_flags(t_vars *vars)
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
  vars->plus = 0;
  vars->space = 0;
  vars->tmp_var = 0;
  vars->unsigned_var = 0;
}

void ft_init_precision(t_vars *vars)
{
  vars->precision = 1;
  vars->precision_parsing = 1;
  vars->precision_width = 0;
}

size_t is_conversion(char c)
{
  if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || c == 'u' || c == 'x' || c == 'X' || c == '%')
    return 1;
  else
    return 0;
}

size_t ft_is_flag(char c)
{
  if (is_conversion(c) || c == '-' || c == ' ' || c == '.' || c == '+' || c == '*' || (c >= '0' && c <= '9'))
    return 1;
  else
    return 0;
}

void  ft_parser(char *parse, va_list ap, t_vars *vars)
{
  char c;
  char *tmp;
  char *padding;

  ft_init_flags(vars);
  vars->parse_count++;
  while (!is_conversion(parse[vars->parse_count]))
  {
    c = parse[vars->parse_count];
    if (c == '*')
    {
      if (vars->precision_parsing)
        vars->precision_width = va_arg(ap, int);
      else
        vars->width = va_arg(ap, int);
    }
    if (c == '0' && !vars->minus && !vars->precision_parsing)
      vars->zero = 1;
    if (c > '0' && c <= '9' && !vars->precision_parsing)
      vars->width = ft_simple_atoi(parse, &vars->parse_count);
    if (c >= '0' && c <= '9' && vars->precision_parsing)
      vars->precision_width = ft_simple_atoi(parse, &vars->parse_count);
    vars->precision_parsing = 0;
    if (c == '-')
    {
      vars->minus = 1;
      vars->zero = 0;
    }
    if (c == '.')
      ft_init_precision(vars);
    if (c == ' ')
      vars->space = 1;
    if (c == '+')
      vars->plus = 1;
    if (parse[vars->parse_count + 1] == '\0')
      return ;
    if (!ft_is_flag(parse[vars->parse_count + 1]))
    {
      tmp = ft_c_to_str(parse[vars->parse_count + 1]);
      vars->conversion_len = 1;
      if(vars->minus)
        ft_add_str_to_buff(vars, tmp);
      padding = ft_handle_padding(vars);
      ft_add_str_to_buff(vars, padding);
      if (!vars->minus)
        ft_add_str_to_buff(vars, tmp);
      free(tmp);
      free(padding);
      vars->parse_count++;
      return ;
    }
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
}
