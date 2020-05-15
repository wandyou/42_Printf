/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_join.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 22:48:27 by nlafarge          #+#    #+#             */
/*   Updated: 2020/05/15 13:54:47 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/ft_printf.h"

void ft_handle_join(char *str, char *space, t_vars *vars)
{
  if (vars->is_int && vars->zero)
    ft_handle_sign(vars);
  if (vars->zero && vars->conversion == 'p')
  {
    ft_add_str_to_buff(vars, "0x10");
    vars->conversion_len -= 4;
  }
  if (space && !vars->minus)
    ft_add_str_to_buff(vars, space);
  if (!vars->zero && vars->conversion == 'p')
  {
    ft_add_str_to_buff(vars, "0x10");
    vars->conversion_len -= 4;
  }
  if (vars->is_int && !vars->zero)
    ft_handle_sign(vars);
  ft_add_str_to_buff(vars, str);
  if (space && vars->minus)
    ft_add_str_to_buff(vars, space);
  free(str);
  free(space);
}