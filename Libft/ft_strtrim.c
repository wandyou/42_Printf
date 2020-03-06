/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 11:25:07 by nlafarge          #+#    #+#             */
/*   Updated: 2019/11/19 11:25:10 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*cpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;
	char	*trimed;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;
	len = ft_strlen((char *)&s1[start]);
	if (len != 0)
	{
		while (s1[start + len - 1]
				&& ft_strchr(set, s1[start + len - 1]) != NULL)
		{
			len--;
		}
	}
	if ((trimed = (char*)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	trimed = cpy(trimed, &s1[start], len);
	trimed[len] = '\0';
	return (trimed);
}
