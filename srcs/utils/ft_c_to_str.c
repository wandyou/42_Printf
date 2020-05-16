/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c_to_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 22:50:17 by nlafarge          #+#    #+#             */
/*   Updated: 2020/05/16 05:49:58 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

char *ft_c_to_str(char c)
{
  char *str;

  str = ft_calloc(2, sizeof(char));
  str[0] = c;
  str[1] = '\0';
  return (str);
}
