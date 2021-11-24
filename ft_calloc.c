/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/01 12:03:57 by mweverli      #+#    #+#                 */
/*   Updated: 2021/11/24 14:59:10 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	char	*ptr;

	ptr = malloc(nitems * size);
	if (!(ptr))
		return (0);
	ft_memset(ptr, 0, nitems * size);
	return (ptr);
}
