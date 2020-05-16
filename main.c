/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 11:17:26 by nlafarge          #+#    #+#             */
/*   Updated: 2020/05/16 04:54:35 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(int argc, char **argv)
{
  argv = NULL;
  argc = 0;
  int result;

  result = -34;
  printf("%d\n", result);
  result = -result;
  printf("%d\n", result);

  //result = ft_printf("Nous sommes le %d Mai %d", 3, 2020);
  // result = ft_printf("Nous sommes le %s %s %s %s", "Jeudi 5 Octobre", "il est", "20h", "de l'apreès midi");
  // printf("\n[CARACTERES] = %d\n\n", result);
}
