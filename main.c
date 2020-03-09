/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 11:17:26 by nlafarge          #+#    #+#             */
/*   Updated: 2020/03/09 12:01:03 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/main_include.h"

int main(int argc, char *argv[])
{
  if (argc > 1)
  {
    ft_printf(argv[1]);
  }
  else
  {
    printf("Aucun argument passé");
  }

}