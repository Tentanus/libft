/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_dec.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/07 14:26:14 by mweverli      #+#    #+#                 */
/*   Updated: 2022/11/02 13:18:16 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	base_len_dec(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	put_int(va_list list)
{
	int		num;
	char	*str;

	num = va_arg(list, int);
	str = ft_itoa(num);
	if (!str)
		return (0);
	num = base_len_dec((long) num);
	write(1, str, num);
	free(str);
	return (num);
}

int	put_uint(va_list list)
{
	unsigned int	num;
	char			*str;

	num = va_arg(list, unsigned int);
	str = ft_itoa((long) num);
	if (!str)
		return (0);
	num = base_len_dec((long) num);
	write(1, str, num);
	free(str);
	return (num);
}
