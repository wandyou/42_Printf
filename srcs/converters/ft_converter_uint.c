/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converter_uint.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 13:04:40 by nlafarge          #+#    #+#             */
/*   Updated: 2020/05/15 13:24:16 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/ft_printf.h"

void ft_converter_uint(va_list ap, t_vars *vars)
{
  char	*str;
	char	*padding;

	vars->is_int = 1;
	vars->tmp_var = (uintmax_t)va_arg(ap, unsigned int);
	str = ft_simple_uitoa(vars->tmp_var);
	vars->conversion_len = ft_strlen(str);
	str = ft_num_precision(str, vars);
	vars->conversion_len = ft_strlen(str);
	if (vars->tmp_var == 0 && vars->precision && vars->precision_width == 0
		&& !vars->width)
	{
		free(str);
		return ;
	}
	if (vars->tmp_var == 0 && vars->precision && vars->precision_width == 0)
	{
		free(str);
		str = ft_strdup(" ");
	}
	padding = ft_handle_padding(vars);
	ft_handle_join(str, padding, vars);
}