/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converter_p.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 01:35:54 by nlafarge          #+#    #+#             */
/*   Updated: 2020/05/16 05:27:13 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

void ft_converter_p(va_list ap, t_vars *vars)
{
  char *str;
  char *padding;

  vars->unsigned_var = va_arg(ap, long unsigned);
  str = ft_itoa_hex(vars->unsigned_var, "0123456789abcdef");
  if (vars->precision)
    vars->zero = 0;
  vars->conversion_len = ft_strlen(str);
  str = ft_num_precision(str, vars);
  vars->conversion_len = ft_strlen(str) + 2;
  if (vars->unsigned_var == 0 && vars->precision && vars->precision_width == 0)
  {
    free(str);
    str = ft_strdup("");
    vars->conversion_len -= 1;
  }
  padding = ft_handle_padding(vars);
  ft_handle_join(str, padding, vars);
}
