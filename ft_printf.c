/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 11:18:04 by nlafarge          #+#    #+#             */
/*   Updated: 2020/03/09 13:10:07 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/main_include.h"



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
    if (parse[i] == '%') // Il y a un modulo
    {
      type = parse[++i];
    }
    else // C'est autre chose qu'un modulo
    {
      buff[y] = parse[i];
      y++;
    }
    i++;
  }
  ft_putstr(buff);
  return (0);
}