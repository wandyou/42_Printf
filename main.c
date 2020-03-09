/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 11:17:26 by nlafarge          #+#    #+#             */
/*   Updated: 2020/03/09 23:17:33 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void test(void)
{
  printf("AZERTY\n");
}

int test2(int num)
{
  return (num);
}

int main(int ac, char const **argv)
{
  void (*ptrFunction) (void) = &test;
  int (*ptrFunc) (int) = &test2;
  int a = 0;
  
  ac = 0;
  argv = NULL;

  ptrFunction();
  a = ptrFunc(45);

  printf("%d\n", a);
  return 0;
}