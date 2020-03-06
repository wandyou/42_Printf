/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 11:23:56 by nlafarge          #+#    #+#             */
/*   Updated: 2019/11/19 11:23:58 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t			counter;
	unsigned int	len;

	len = 0;
	if (!src)
		return (0);
	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	counter = 0;
	while (src[counter] != '\0' && counter < (dstsize - 1))
	{
		dst[counter] = src[counter];
		++counter;
	}
	if (dstsize)
		dst[counter] = '\0';
	return (len);
}
