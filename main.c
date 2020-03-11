/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 11:17:26 by nlafarge          #+#    #+#             */
/*   Updated: 2020/03/11 19:30:52 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/ft_printf.h"

int main(int argc, char **argv)
{
  argv = NULL;
  argc = 0;
  int result;

  printf("\n\n[Démarrage du script]\n\n");
  result = ft_printf("Je m'appelle Nathan et je suis particulièrement beau", "ergerg");
}