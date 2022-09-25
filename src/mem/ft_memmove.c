/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/13 11:29:34 by mweverli      #+#    #+#                 */
/*   Updated: 2021/12/13 11:29:36 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*ptr_dst;
	const unsigned char	*ptr_src;

	if (!dst && !src)
		return (NULL);
	i = 0;
	ptr_dst = (unsigned char *) dst;
	ptr_src = (unsigned char *) src;
	if (dst > src)
		while (len-- > 0)
			ptr_dst[len] = ptr_src[len];
	else
	{
		while (i != len)
		{
			ptr_dst[i] = ptr_src[i];
			i++;
		}
	}
	return (dst);
}
