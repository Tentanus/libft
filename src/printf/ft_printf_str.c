/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_str.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/07 14:26:14 by mweverli      #+#    #+#                 */
/*   Updated: 2022/07/09 15:40:19 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_char(va_list list)
{
	char	c;

	c = va_arg(list, int);
	return (write(1, &c, 1));
}

int	put_str(va_list list)
{
	char	*str;
	int		count;

	str = va_arg(list, char *);
	if (str == NULL)
		return (write(1, "(null)", 6));
	count = 0;
	while (str[count])
		count++;
	write(1, str, (count));
	return (count);
}
