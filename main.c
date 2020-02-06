/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 11:17:26 by nlafarge          #+#    #+#             */
/*   Updated: 2020/02/06 13:21:16 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/main_include.h"

int multiplication(int nombreNombresAMultiplier, ...)
{
    int i;
    va_list ap;
    int resultat;
    int argument;
    
    i = 0;
    resultat = 1;
    va_start(ap, nombreNombresAMultiplier);
    while (i < nombreNombresAMultiplier)
    {
        argument = va_arg(ap, int);
        resultat = resultat * argument;
        printf("Arg : %d\n", argument);
        printf("Résultat : %d\n", resultat);
        i++;
    }
    va_end(ap);
    return(resultat);
}

int main()
{
    // if (ac > 1)
    // {
    //     ft_printf("%s", av[1])
    //     printf("%s", av[1]);
    // }

    int resultat;

    resultat = multiplication(3, 3, 5, 45);
    printf("%d", resultat);
    
    return (0);
}