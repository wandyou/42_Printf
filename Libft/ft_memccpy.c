/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 15:43:40 by nlafarge          #+#    #+#             */
/*   Updated: 2019/11/13 15:57:04 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*src_tmp;
	unsigned char	*dst_tmp;
	unsigned char	char_tmp;

	i = 0;
	src_tmp = (unsigned char*)src;
	dst_tmp = (unsigned char*)dst;
	char_tmp = (unsigned char)c;
	while (i < n)
	{
		*dst_tmp = src_tmp[i];
		dst_tmp++;
		if (char_tmp == src_tmp[i])
		{
			return (dst_tmp);
		}
		i++;
	}
	return (NULL);
}
