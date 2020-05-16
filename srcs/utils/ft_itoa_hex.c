/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 01:47:27 by nlafarge          #+#    #+#             */
/*   Updated: 2020/05/16 05:50:10 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

char	*ft_itoa_hex(uintmax_t num, char *hex)
{
	char	*str;
	int		num_len;
	int		hex_len;

  num_len = ft_intlen_hex(num, hex);
	hex_len = ft_strlen(hex);
	if (!(str = ft_calloc((num_len + 1), sizeof(char))))
		return (NULL);
	str[num_len] = '\0';
	while (num_len)
	{
		str[--num_len] = hex[num % hex_len];
		num = num / hex_len;
	}
	return (str);
}

size_t	ft_intlen_hex(uintmax_t num, char *hex)
{
	size_t		len;
	uintmax_t	hex_len;

	len = 1;
	hex_len = ft_strlen(hex);
	while (num >= hex_len)
	{
		num = num / hex_len;
		len++;
	}
	return (len);
}
