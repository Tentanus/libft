/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_utils.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/07 18:15:37 by mweverli      #+#    #+#                 */
/*   Updated: 2022/11/02 15:23:58 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	write_till(const char **str)
{
	int	count;

	count = 0;
	while ((*str)[count] && (*str)[count] != FORMAT_CHAR)
		count++;
	write(1, *str, count);
	*str += count;
	return (count);
}

void	ft_strtoupper(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
	return ;
}
