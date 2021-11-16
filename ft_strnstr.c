/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/22 12:55:36 by mweverli      #+#    #+#                 */
/*   Updated: 2021/11/14 20:08:18 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hst, const char *ndl, size_t len)
{
	size_t	i;
	size_t	size;

	if (*ndl == '\0' || len == 0)
		return ((char *) hst);
	i = 0;
	size = ft_strlen(ndl);
	while (hst[i] != '\0' && (i + size) <= len)
	{
		if (!(ft_memcmp((hst + i), ndl, size)))
			return ((char *) hst + i);
		i++;
	}
	return (0);
}
