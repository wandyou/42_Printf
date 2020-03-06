/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 11:21:35 by nlafarge          #+#    #+#             */
/*   Updated: 2019/11/19 11:21:39 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_digitlen(long nombre)
{
	size_t	size;

	if (nombre == 0)
		return (nombre + 1);
	size = 0;
	if (nombre < 0)
	{
		nombre = -nombre;
		size++;
	}
	while (nombre != 0)
	{
		nombre /= 10;
		size++;
	}
	return (size);
}

static int	ft_sign(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char		*ft_itoa(int n)
{
	long	long_n;
	long	len;
	char	*response;

	long_n = n;
	len = ft_digitlen(long_n);
	if (len == 0)
		len = 1;
	response = (char *)malloc((len + 1) * sizeof(char));
	if (!response)
		return (NULL);
	response[len] = '\0';
	len--;
	if (long_n < 0)
		long_n = -long_n;
	while (len >= 0)
	{
		response[len] = (long_n % 10) + 48;
		len--;
		long_n /= 10;
	}
	if (ft_sign(n))
		response[0] = '-';
	return (response);
}
