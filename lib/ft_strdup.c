/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 02:32:38 by nlafarge          #+#    #+#             */
/*   Updated: 2020/05/15 02:33:11 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		len;
	int		i;

	len = ft_strlen((char *)s1);
	if (!(s2 = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s2[i] = s1[i];
		i += 1;
	}
	s2[i] = '\0';
	return (s2);
}