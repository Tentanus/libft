/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/02 19:07:06 by mweverli      #+#    #+#                 */
/*   Updated: 2022/07/09 15:37:11 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static const t_func	g_func_array[128] = {
['c'] = &put_char,
['b'] = &put_bin,
['d'] = &put_int,
['i'] = &put_int,
['p'] = &put_poi,
['s'] = &put_str,
['u'] = &put_uint,
['x'] = &put_hex,
['X'] = &put_hex_up,
['%'] = &put_prc
};

int	ft_printf(const char *str, ...)
{
	int		len_ret;
	va_list	arg;

	va_start(arg, str);
	len_ret = 0;
	while (*str)
	{
		if (*str != FORMAT_CHAR)
			len_ret += write_till(&str);
		else
		{
			str++;
			if (*g_func_array[(int) *str] != NULL)
				len_ret += (*g_func_array[(int) *str++])(arg);
			else if (*str)
				str++;
			else
				break ;
		}
	}
	va_end(arg);
	return (len_ret);
}
