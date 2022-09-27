/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/13 11:29:56 by mweverli      #+#    #+#                 */
/*   Updated: 2021/12/13 11:29:59 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	size;
	char	*dst;

	if (!src)
		return (NULL);
	size = ft_strlen(src);
	dst = malloc(sizeof(char) * (size + 1));
	if (!(dst))
		return (NULL);
	dst = (char *) ft_memcpy(dst, src, (size));
	dst[size] = '\0';
	return (dst);
}
