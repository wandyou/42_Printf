/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_join.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 22:48:27 by nlafarge          #+#    #+#             */
/*   Updated: 2020/05/15 02:39:07 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/ft_printf.h"

void ft_handle_join(char *str, char *space, t_vars *vars)
{
  if (vars->zero && vars->conversion == 'p')
  {
    ft_add_str_to_buff(vars, "0x");
    vars->conversion_len -= 2;
  }
  if (space && !vars->minus)
    ft_add_str_to_buff(vars, space);
  if (!vars->zero && vars->conversion == 'p')
  {
    ft_add_str_to_buff(vars, "0x");
    vars->conversion_len -= 2;
  }
  ft_add_str_to_buff(vars, str);
  if (space && vars->minus)
    ft_add_str_to_buff(vars, space);
  free(str);
  free(space);
}