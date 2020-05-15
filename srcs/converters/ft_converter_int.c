/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converter_int.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 02:41:12 by nlafarge          #+#    #+#             */
/*   Updated: 2020/05/15 03:12:19 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/ft_printf.h"

void	ft_converter_int(va_list ap, t_vars *vars)
{
	char	*str;
	char	*padding;

	vars->is_int = 1;
	vars->tmp_var = (intmax_t)va_arg(ap, int);
	str = ft_simple_itoa(vars->tmp_var);
	vars->conversion_len = ft_intlen(vars->tmp_var);
	str = ft_num_precision(str, vars);
	vars->conversion_len = ft_strlen(str);
	if (vars->tmp_var < 0)
    vars->conversion_len++;
	if (vars->tmp_var >= 0 && (vars->plus || vars->space))
    vars->conversion_len++;
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