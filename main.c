/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 11:17:26 by nlafarge          #+#    #+#             */
/*   Updated: 2020/05/03 13:41:42 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/ft_printf.h"

int main(int argc, char **argv)
{
  argv = NULL;
  argc = 0;
  int result;

  result = printf("Ceci est un test %.5c", 'f');
  printf("\n[CARACTERES] = %d\n\n", result);

  //result = ft_printf("Nous sommes le %d Mai %d", 3, 2020);
  // result = ft_printf("Nous sommes le %s %s %s %s", "Jeudi 5 Octobre", "il est", "20h", "de l'apreès midi");
  // printf("\n[CARACTERES] = %d\n\n", result);
}