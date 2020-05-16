/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converter_c.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 15:27:23 by nlafarge          #+#    #+#             */
/*   Updated: 2020/05/16 05:06:41 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

void ft_converter_c(va_list ap, t_vars *vars)
{
  char *str;
  char *padding;

  str = NULL;
  vars->conversion_len = 1;
  if (vars->conversion == 'c')
    str = ft_c_to_str(va_arg(ap, int));
  if (vars->conversion == '%')
    str = ft_c_to_str('%');
  padding = ft_handle_padding(vars);
  ft_handle_join(str, padding, vars);
}
