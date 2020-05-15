/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 02:51:58 by nlafarge          #+#    #+#             */
/*   Updated: 2020/05/15 03:13:13 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

size_t		ft_intlen(intmax_t nb)
{
	size_t		len;

	len = 0;
	if (!nb)
		len++;
	while (nb)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}