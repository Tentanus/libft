/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/01 12:09:54 by mweverli      #+#    #+#                 */
/*   Updated: 2022/02/25 17:47:36 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

/**
 *  @brief
 *  set n bytes to 0 at the pointer, ptr.
 *
 *  @param ptr  Pointer
 *  @param n    bytes to be set
 */

void	ft_bzero(void *ptr, size_t n)
{
	ft_memset(ptr, 0, n);
}
