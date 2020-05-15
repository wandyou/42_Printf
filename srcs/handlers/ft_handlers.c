/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handlers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 21:09:55 by nlafarge          #+#    #+#             */
/*   Updated: 2020/05/15 02:40:59 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/ft_printf.h"

void ft_handlers(char *parse, va_list ap, t_vars *vars)
{
  if (vars->conversion == '%' || vars->conversion == 'c')
    ft_converter_c(ap, vars);
  else if (vars->conversion == 's')
    ft_converter_str(ap, vars);
  else if (vars->conversion == 'p')
    ft_converter_p(ap, vars);
  else if (vars->conversion == 'd' || vars->conversion == 'i')
    ft_converter_int(ap, vars);
}