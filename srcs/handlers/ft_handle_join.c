/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_join.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 22:48:27 by nlafarge          #+#    #+#             */
/*   Updated: 2020/05/16 05:12:06 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

void ft_handle_join(char *str, char *padding, t_vars *vars)
{
  if (vars->is_int && vars->zero)
    ft_handle_sign(vars);
  if (vars->zero && vars->conversion == 'p')
  {
    ft_add_str_to_buff(vars, "0x");
    vars->conversion_len -= 2;
  }
  if (padding && !vars->minus)
    ft_add_str_to_buff(vars, padding);
  if (!vars->zero && vars->conversion == 'p')
  {
    ft_add_str_to_buff(vars, "0x");
    vars->conversion_len -= 2;
  }
  if (vars->is_int && !vars->zero)
    ft_handle_sign(vars);
  ft_add_str_to_buff(vars, str);
  if (padding && vars->minus)
    ft_add_str_to_buff(vars, padding);
  free(str);
  free(padding);
}
