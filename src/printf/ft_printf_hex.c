/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_hex.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/07 14:26:14 by mweverli      #+#    #+#                 */
/*   Updated: 2022/11/02 15:37:46 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	base_len_hex(unsigned long n)
{
	int	len;

	len = 0;
	if (n == 0)
		len++;
	while (n)
	{
		n /= 16;
		len++;
	}
	return (len);
}

int	put_poi(va_list list)
{
	char			*str;
	unsigned long	n;

	n = va_arg(list, unsigned long);
	str = ft_itoh(n);
	if (!str)
		return (0);
	n = base_len_hex(n);
	write(1, "0x", 2);
	write(1, str, n);
	free(str);
	return (2 + (int) n);
}

int	put_hex(va_list list)
{
	char			*str;
	unsigned int	n;

	n = va_arg(list, unsigned int);
	str = ft_itoh(n);
	if (!str)
		return (0);
	n = base_len_hex(n);
	write(1, str, n);
	free(str);
	return (n);
}

int	put_hex_up(va_list list)
{
	char			*str;
	unsigned int	n;

	n = va_arg(list, unsigned long);
	str = ft_itoh(n);
	if (!str)
		return (0);
	n = base_len_hex(n);
	ft_strtoupper(str);
	write(1, str, n);
	free(str);
	return ((int) n);
}
