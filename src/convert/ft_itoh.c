/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoh.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/02 15:21:37 by mweverli      #+#    #+#                 */
/*   Updated: 2022/11/02 15:37:45 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	hex_length(unsigned long n)
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

char	*ft_itoh(unsigned long n)
{
	char	*set;
	char	*str;
	int		b_len;

	set = "0123456789abcdef\0";
	b_len = hex_length(n);
	str = malloc((b_len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[b_len--] = '\0';
	if (n == 0)
		str[0] = '0';
	while (n)
	{
		str[b_len--] = set[n % 16];
		n /= 16;
	}
	return (str);
}
