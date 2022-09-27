/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/13 11:31:48 by mweverli      #+#    #+#                 */
/*   Updated: 2021/12/13 11:31:49 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*b;

	b = (char *)s + ft_strlen(s);
	while (s != b)
	{
		if (*b == (unsigned char) c)
			return (b);
		b--;
	}
	if (*b == (unsigned char) c)
		return (b);
	return (0);
}
