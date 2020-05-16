/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 11:56:20 by nlafarge          #+#    #+#             */
/*   Updated: 2020/05/16 05:46:14 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 64
# endif

typedef struct s_vars
{
  char  buff[BUFFER_SIZE + 1];
  int buff_count;
  int parse_count;
  int tot_chars;
  int zero;
  int minus;
  int width;
  int precision;
  int precision_parsing;
  int precision_width;
  int conversion;
  int conversion_len;
  int space_len;
  uintmax_t tmp_var;
  int is_int;
  int space;
  int plus;
  uintmax_t unsigned_var;
} t_vars;

int ft_printf(const char *parse, ...);

void  ft_print_buff(t_vars *vars);
void  ft_add_str_to_buff(t_vars *vars, char *str);
void  ft_add_char_to_buff(t_vars *vars, char c);

void  ft_parser(char *parse, va_list ap, t_vars *vars);
void  ft_init_flags(t_vars *vars);
size_t is_conversion(char c);
size_t ft_is_flag(char c);

void	*ft_memset(void *b, int c, size_t len);
size_t	ft_strlen(const char *str);
int		ft_simple_atoi(char *parse, int *parse_count);
char	*ft_simple_itoa(intmax_t n);
char *ft_c_to_str(char c);
void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *s, size_t n);
char	*ft_strdup_width(char *str, t_vars *vars);
char	*ft_itoa_hex(uintmax_t var, char *base);
char	*ft_num_precision(char *str, t_vars *vars);
char	*ft_strdup(const char *s1);
size_t		ft_intlen(intmax_t nb);
char	*ft_simple_uitoa(uintmax_t num);
size_t	ft_uintlen(uintmax_t num);
size_t	ft_intlen_hex(uintmax_t n, char *base);

void ft_handlers(va_list ap, t_vars *vars);
char *ft_handle_padding(t_vars *vars);
void ft_handle_join(char *str, char *padding, t_vars *vars);
void	ft_handle_sign(t_vars *vars);

void ft_converter_c(va_list ap, t_vars *vars);
void ft_converter_str(va_list ap, t_vars *vars);
void ft_converter_p(va_list ap, t_vars *vars);
void	ft_converter_int(va_list ap, t_vars *vars);
void ft_converter_uint(va_list ap, t_vars *vars);
void ft_converter_hex(va_list ap, t_vars *vars);

#endif
