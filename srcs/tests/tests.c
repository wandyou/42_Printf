/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 15:14:00 by nlafarge          #+#    #+#             */
/*   Updated: 2020/05/14 15:16:11 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/ft_printf.h"

void  ft_print_struct(t_vars *vars)
{
  printf("[ATTRIBUTES]\n");
  printf("Zéro            = %d\n", vars->zero);
  printf("Minus           = %d\n", vars->minus);
  printf("Width           = %d\n", vars->width);
  printf("Précision       = %d\n", vars->precision);
  printf("Précision width = %d\n", vars->precision_width);
  printf("\n\n");
}