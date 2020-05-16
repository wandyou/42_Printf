/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_padding.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 21:11:43 by nlafarge          #+#    #+#             */
/*   Updated: 2020/05/16 05:09:41 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

char *ft_handle_padding(t_vars *vars)
{
  char *str;
  int i;

  i = 0;
  if (vars->width < vars->conversion_len)
    return (NULL);
  if (!(str = ft_calloc((vars->width - vars->conversion_len + 1), sizeof(char))))
    return (NULL);
  if (vars->precision && vars->precision_width > vars->conversion_len)
    vars->zero = 0;
  while (i < vars->width - vars->conversion_len)
  {
    if (vars->zero)
      str[i] = '0';
    else
      str[i] = ' ';
    i++;
  }
  vars->space_len = i;
  str[i] = '\0';
  return (str);
}
