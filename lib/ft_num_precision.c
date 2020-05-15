/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_precision.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 02:29:23 by nlafarge          #+#    #+#             */
/*   Updated: 2020/05/15 02:34:57 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

char	*ft_num_precision(char *str, t_vars *vars)
{
	char	*tmp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!vars->precision)
		return (str);
	if (vars->precision_width < vars->conversion_len)
		return (str);
	if (!(tmp = ft_calloc(vars->precision_width + vars->conversion_len + 1, sizeof(char))))
		return (NULL);
	while (i < vars->precision_width - vars->conversion_len)
	{
		tmp[i] = '0';
		i++;
	}
	while (str[j])
	{
		tmp[i + j] = str[j];
		j++;
	}
	tmp[i + j] = '\0';
	free(str);
	return (tmp);
}