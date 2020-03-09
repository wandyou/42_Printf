/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 11:18:04 by nlafarge          #+#    #+#             */
/*   Updated: 2020/03/09 23:11:48 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *parse)
{
  int i;
  int y;
  char type;
  char buff[500];

  i = 0;
  y = 0;
  while (parse[i] != '\0')
  {
    if (parse[i] == '%') // Il y a un pourcent
    {
      type = parse[++i];
    }
    else // C'est autre chose qu'un pourcent
    {
      buff[y] = parse[i];
      y++;
    }
    i++;
  }
  return (0);
}