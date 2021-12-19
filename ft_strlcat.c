/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/13 11:30:43 by mweverli      #+#    #+#                 */
/*   Updated: 2021/12/13 11:30:44 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ldst;
	size_t	lsrc;
	size_t	i;

	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	i = 0;
	if (ldst >= dstsize)
		return (lsrc + dstsize);
	while (src[i] != '\0' && (dstsize - ldst - 1) > 0)
	{
		dst[ldst + i] = src[i];
		i++;
		dstsize--;
	}
	dst[ldst + i] = '\0';
	return (ldst + lsrc);
}
