/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converter_str.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 23:56:36 by nlafarge          #+#    #+#             */
/*   Updated: 2020/05/16 05:18:16 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

void ft_converter_str(va_list ap, t_vars *vars)
{
  char *str;
  char *padding;

  if (vars->precision && vars->precision_width < 0)
    vars->precision_width = -vars->precision_width;
  if (!(str = va_arg(ap, char *)))
    str = ft_strdup_width("(null)", vars);
  else
    str = ft_strdup_width(str, vars);
  vars->conversion_len = ft_strlen(str);
  padding = ft_handle_padding(vars);
  ft_handle_join(str, padding, vars);
}
