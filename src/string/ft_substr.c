/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/13 11:31:56 by mweverli      #+#    #+#                 */
/*   Updated: 2022/02/16 11:16:27 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *src, unsigned int start, size_t len)
{
	size_t	len_src;
	char	*dst;

	if (!src)
		return (NULL);
	len_src = ft_strlen(src);
	if ((size_t) start >= len_src)
		return (ft_strdup(""));
	if (len > len_src)
		len = len_src;
	dst = (char *) malloc(sizeof(char) * (len + 1));
	if (!(dst))
		return (NULL);
	ft_memcpy(dst, &(src[start]), len);
	dst[len] = '\0';
	return (dst);
}
