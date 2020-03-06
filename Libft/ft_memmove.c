/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 10:28:29 by nlafarge          #+#    #+#             */
/*   Updated: 2019/11/14 12:01:49 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_mover(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_tmp;
	unsigned char	*src_tmp;
	size_t			i;

	dst_tmp = (unsigned char*)dst;
	src_tmp = (unsigned char*)src;
	i = 0;
	if (dst_tmp < src_tmp)
	{
		while (i < len)
		{
			dst_tmp[i] = src_tmp[i];
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			dst_tmp[len - 1] = src_tmp[len - 1];
			len--;
		}
	}
	return (NULL);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst == NULL && src == NULL)
		return (NULL);
	ft_mover(dst, src, len);
	return (dst);
}
