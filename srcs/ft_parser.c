/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/19 16:26:08 by nlafarge          #+#    #+#             */
/*   Updated: 2020/03/19 17:24:06 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

int ft_is_form(char c)
{
  return (c == '%');
}

int ft_is_form_or_flag(char c)
{
  return (ft_is_form(c));
}

void  ft_parse(char *parse, va_list ap, t_vars *vars)
{

  ap = NULL;
  vars->parse_count++;
  if (parse[vars->parse_count] == '%')
    ft_add_char_to_buff(vars, '%');
}