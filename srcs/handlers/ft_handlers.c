/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handlers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 21:09:55 by nlafarge          #+#    #+#             */
/*   Updated: 2020/05/15 15:01:44 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/ft_printf.h"

void ft_handlers(va_list ap, t_vars *vars)
{
  if (vars->conversion == '%' || vars->conversion == 'c')
    ft_converter_c(ap, vars);
  else if (vars->conversion == 's')
    ft_converter_str(ap, vars);
  else if (vars->conversion == 'p')
    ft_converter_p(ap, vars);
  else if (vars->conversion == 'd' || vars->conversion == 'i')
    ft_converter_int(ap, vars);
  else if (vars->conversion == 'u')
    ft_converter_uint(ap, vars);
  else if (vars->conversion == 'x')
    ft_converter_hex(ap, vars);
  else if (vars->conversion == 'X')
    ft_converter_hex(ap, vars);
}