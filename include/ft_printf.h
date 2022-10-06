/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/02 16:15:30 by mweverli      #+#    #+#                 */
/*   Updated: 2022/08/01 19:13:23 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

//INCLUDE

# include <limits.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

//DEFINITIONS

# ifndef FORMAT_CHAR
#  define FORMAT_CHAR '%'
# endif

typedef int		(*t_func) (va_list );

//FUNCTION
//				FT_PRINTF
int				ft_printf(const char *str, ...);

//				FT_PRINTF_STR
int				put_char(va_list list);
int				put_str(va_list list);

//				FT_PRINTF_HEX
int				base_len_hex(unsigned long n);
int				put_poi(va_list list);
int				put_hex(va_list list);
int				put_hex_up(va_list list);

//				FT_PRINTF_DEC
int				base_len_dec(long n);
int				put_int(va_list list);
int				put_uint(va_list list);

//				FT_PRINTF_MIS
int				put_prc(va_list list);

//				FT_PRINTF_UTILS_01
char			*ft_itoa(long n);
char			*ft_itoh(unsigned long n);
int				write_till(const char **str);
void			ft_strtoupper(char *str);

#endif
