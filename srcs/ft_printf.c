/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 11:18:04 by nlafarge          #+#    #+#             */
/*   Updated: 2020/03/12 10:31:04 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

// INITIALISATION DE LA STRUCTURE
void  ft_init_struct(t_vars *vars)
{
  vars->parse_count = 0; // Index dans le str parse
  vars->buff_count = 0; // Index dans le buffer
  vars->tot_chars = 0; // Compteur du nombre total de caractères affichés
}

// IMPRIMER CE QU'IL Y A DANS LE BUFFER
void  ft_print_buff(t_vars *vars)
{
  write(1, vars->buff, vars->buff_count); // Imprime le buffer
  vars->tot_chars += vars->buff_count; // Incrémente le nombre total de caractères
  vars->buff_count = 0; // Reset l'index du buffer
  ft_memset(vars->buff, 0, ft_strlen(vars->buff)); // Reset le buffer
}

// AJOUTER UN CARACTERE AU BUFFER
void  ft_add_to_buff(t_vars *vars, char c)
{
  if (vars->buff_count == BUFFER_SIZE) // Si le buffer est plein avant d'ajouter un caractère
    ft_print_buff(vars); // Imprimer le buffer et le vider

  vars->buff[vars->buff_count] = c; // Ajouter le caractère au buffer
  vars->buff_count++; // Incrémenter l'index du buffer
}

int   ft_printf(const char *parse, ...)
{
  t_vars vars;
  // va_list ap;

  ft_init_struct(&vars);
  // va_start(ap, parse);
  
  while (parse[vars.parse_count])
  {
    if (parse[vars.parse_count] == '%') // On rencontre un %
    {

    }
    else
      ft_add_to_buff(&vars, parse[vars.parse_count]); // Pas de % alors on imprime normalement
    vars.parse_count++; // Incrémente l'index du str parse
  }

  ft_print_buff(&vars); // On imprime une dernière fois le buffer
  return (vars.tot_chars); // On retourne le nombre total de caractères imprimés
}
