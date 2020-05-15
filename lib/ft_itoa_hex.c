/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 01:47:27 by nlafarge          #+#    #+#             */
/*   Updated: 2020/05/15 02:02:40 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

char	*ft_itoa_hex(uintmax_t var, char *hex)
{
	char	*str;
	int		var_len;
	int		hex_len;

  var_len = 1;
  while (var >= 16)
	{
		var = var / 16;
		var_len++;
	}
	if (!(str = ft_calloc((var_len + 1), sizeof(char))))
		return (NULL);
	str[var_len] = '\0';
	while (var_len)
	{
		str[--var_len] = hex[var % 16];
		var = var / 16;
	}
	return (str);
}