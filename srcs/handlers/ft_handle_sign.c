/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_sign.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 13:17:51 by nlafarge          #+#    #+#             */
/*   Updated: 2020/05/16 05:14:54 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

void	ft_handle_sign(t_vars *vars)
{
	if (vars->tmp_var < 0)
	{
		vars->conversion_len--;
		ft_add_char_to_buff(vars, '-');
	}
	else if (vars->plus && (vars->tmp_var >= 0))
	{
		vars->conversion_len--;
		ft_add_char_to_buff(vars, '+');
	}
	else if (vars->space && !vars->plus && (vars->tmp_var >= 0))
	{
		vars->conversion_len--;
		ft_add_char_to_buff(vars, ' ');
	}
}
