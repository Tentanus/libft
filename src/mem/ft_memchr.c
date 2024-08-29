/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/13 11:29:09 by mweverli      #+#    #+#                 */
/*   Updated: 2022/03/12 15:08:32 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *  @brief
 *  Locate the first occurrence of c (converted to an unsigned char) in string s.
 *
 *  @param s		String
 *  @param c		Unsigned character
 *  @param n		Number of bytes
 *
*  @return void*	Pointer to the byte located, or NULL if no such byte exists within n bytes.
 */
 

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	while (n > 0)
	{
		if (*ptr == ((unsigned char) c))
			return ((void *)ptr);
		ptr++;
		n--;
	}
	return (NULL);
}
