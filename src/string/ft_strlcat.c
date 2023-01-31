/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/13 11:30:43 by mweverli      #+#    #+#                 */
/*   Updated: 2023/01/31 12:27:16 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	if (!dst || !src)
		return (0);
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = 0;
	if (len_dst >= dstsize)
		return (len_src + dstsize);
	while (src[i] != '\0' && (dstsize - len_dst - 1) > 0)
	{
		dst[len_dst + i] = src[i];
		i++;
		dstsize--;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
