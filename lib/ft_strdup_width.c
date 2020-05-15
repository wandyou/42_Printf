/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_width.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 01:21:23 by nlafarge          #+#    #+#             */
/*   Updated: 2020/05/15 01:23:31 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

char	*ft_strdup_width(char *str, t_vars *vars)
{
	char	*new_str;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(str);
	if (vars->precision && vars->precision_width < len)
		len = vars->precision_width;
	if (!(new_str = ft_calloc(len + 1, sizeof(char))))
		return (NULL);
	while (i < len)
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}