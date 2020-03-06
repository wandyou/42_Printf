/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 13:29:30 by nlafarge          #+#    #+#             */
/*   Updated: 2019/11/14 13:59:48 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	chr;

	i = 0;
	chr = (unsigned char)c;
	while (s[i] != 0 && s[i] != chr)
		i++;
	if (s[i] == 0 && s[i] != chr)
		return (NULL);
	else if (s[i] == chr)
		return ((char *)&s[i]);
	return ((char *)&s[i]);
}
