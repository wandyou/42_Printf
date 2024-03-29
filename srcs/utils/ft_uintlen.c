/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uintlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 13:13:55 by nlafarge          #+#    #+#             */
/*   Updated: 2020/05/16 05:50:44 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

size_t	ft_uintlen(uintmax_t num)
{
	size_t		len;

	len = 1;
	while (num >= 10)
	{
		num = num / 10;
		len++;
	}
	return (len);
}
