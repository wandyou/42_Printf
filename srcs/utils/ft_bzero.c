/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 23:04:33 by nlafarge          #+#    #+#             */
/*   Updated: 2020/05/16 05:49:52 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;
	int		c;

	i = 0;
	str = (char *)s;
	c = '\0';
	if (n != 0)
	{
		while (i < n)
		{
			str[i] = (unsigned char)c;
			i++;
		}
	}
}
