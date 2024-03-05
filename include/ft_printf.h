/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/02 16:15:30 by mweverli      #+#    #+#                 */
/*   Updated: 2022/11/02 15:36:29 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

//INCLUDE

# include <limits.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <libft.h>

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

//				FT_PRINTF_BIN
int				put_bin(va_list list);
//	static int	put_bin_16(uint16_t num);
//	static int	put_bin_32(uint32_t num);
//	static int	put_bin_64(uint64_t num);

//				FT_PRINTF_MIS
int				put_prc(va_list list);

//				FT_PRINTF_UTILS
int				write_till(const char **str);
void			ft_strtoupper(char *str);

#endif
