/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 12:22:19 by nlafarge          #+#    #+#             */
/*   Updated: 2019/11/14 13:13:40 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*source;
	unsigned char	chr;
	size_t			i;

	i = 0;
	source = (unsigned char*)s;
	chr = (unsigned char)c;
	while (i < n)
	{
		if (source[i] == chr)
		{
			return (source + i);
		}
		i++;
	}
	return (NULL);
}
