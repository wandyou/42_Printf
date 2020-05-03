/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simple_atoi.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 09:43:00 by nlafarge          #+#    #+#             */
/*   Updated: 2020/05/03 09:44:14 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

int		ft_simple_atoi(char *parse, int *parse_count)
{
	int		value;

	value = 0;
	while (parse[*parse_count] >= '0' && parse[*parse_count] <= '9')
	{
		value = value * 10 + parse[*parse_count] - 48;
		(*parse_count)++;
	}
	(*parse_count)--;
	return (value);
}