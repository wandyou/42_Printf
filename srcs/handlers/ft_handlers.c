/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handlers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 21:09:55 by nlafarge          #+#    #+#             */
/*   Updated: 2020/05/16 05:04:42 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

void ft_handlers(va_list ap, t_vars *vars)
{
  if (vars->conversion == 'c')
    ft_converter_c(ap, vars);
  if (vars->conversion == 's')
    ft_converter_str(ap, vars);
  if (vars->conversion == 'p')
    ft_converter_p(ap, vars);
  if (vars->conversion == 'd' || vars->conversion == 'i')
    ft_converter_int(ap, vars);
  if (vars->conversion == 'u')
    ft_converter_uint(ap, vars);
  if (vars->conversion == 'x')
    ft_converter_hex(ap, vars);
  if (vars->conversion == 'X')
    ft_converter_hex(ap, vars);
  if (vars->conversion == '%')
    ft_converter_c(ap, vars);
}
