/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 11:28:46 by mweverli      #+#    #+#                 */
/*   Updated: 2023/06/30 18:44:54 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *  @brief
 *  Will take in an integer, allocate memory and return a string
 *  containing the decimal number.
 *
 *  @warning Allocates Memory, is to be freed.
 *  @param n
 *  @return char* or NULL if an error occured.
 */

static int	ft_intlen(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int32_t n)
{
	int		size_n;
	long	nbr;
	char	*str;

	nbr = n;
	size_n = ft_intlen(nbr);
	str = malloc((size_n + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[size_n--] = '\0';
	if (nbr == 0)
		str[0] = '0';
	else if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	while (nbr > 0 && size_n >= 0)
	{
		str[size_n] = '0' + (nbr % 10);
		nbr /= 10;
		size_n--;
	}
	return (str);
}
