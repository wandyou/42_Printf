/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simple_itoa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 02:50:34 by nlafarge          #+#    #+#             */
/*   Updated: 2020/05/16 05:50:23 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

char	*ft_simple_itoa(intmax_t n)
{
	char		*str;
	int			num_len;

	num_len = ft_intlen(n);
	if (!(str = ft_calloc((num_len + 1), sizeof(char))))
		return (NULL);
	str[num_len] = '\0';
	while (num_len)
	{
		if (n < 0)
		{
			str[--num_len] = -(n % 10) + 48;
			n = n / 10;
			n = -n;
		}
		else
		{
			str[--num_len] = n % 10 + 48;
			n = n / 10;
		}
	}
	return (str);
}
