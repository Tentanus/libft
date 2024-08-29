/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/01 12:03:57 by mweverli      #+#    #+#                 */
/*   Updated: 2024/02/29 19:30:20 by mweverli         ###    odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *  @brief
 *  return an allocated block of memory of blocksize * n.
 *  The memory has been set to zero[ft_bzero].
 *
 *  @warning			Allocates Memory, is to be freed.
 *  @param n			Amount of blocks to be allocated.
 *  @param blocksize	bytes in a block
 *
 *  @return				Pointer to the allocated memory.
 */

void	*ft_calloc(size_t n, size_t blocksize)
{
	char	*ptr;

	ptr = malloc(n * blocksize);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, n * blocksize);
	return (ptr);
}
