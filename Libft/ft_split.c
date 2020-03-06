/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 11:22:58 by nlafarge          #+#    #+#             */
/*   Updated: 2019/11/20 14:56:46 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

static size_t	len_wrd(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

int				nb_wrd(char *str, char sep)
{
	int	result;
	int	i;

	i = 0;
	result = 0;
	while (str[i] && str[i] == sep)
		i++;
	while (str[i])
	{
		while (str[i] && str[i] != sep)
			i++;
		result++;
		while (str[i] && str[i] == sep)
			i++;
	}
	return (result);
}

static char		*nxt_wrd(char const *s, char c)
{
	while (*s && *s == c)
		s++;
	return ((char *)s);
}

static void		karcher(char **split, size_t cur)
{
	size_t	i;

	i = 0;
	while (i < cur)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

char			**ft_split(char const *s, char c)
{
	char	**split;
	size_t	cur;
	size_t	wordcount;

	if (!(s))
		return (NULL);
	wordcount = nb_wrd((char *)s, c);
	split = (char **)malloc((wordcount + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	cur = 0;
	while (cur < wordcount)
	{
		s = nxt_wrd(s, c);
		split[cur] = ft_substr(s, 0, len_wrd(s, c));
		if (split[cur] == NULL)
		{
			karcher(split, cur);
			return (NULL);
		}
		cur++;
		s += len_wrd(s, c);
	}
	split[wordcount] = NULL;
	return (split);
}
