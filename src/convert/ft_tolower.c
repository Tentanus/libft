/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <@mweverlicodam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/13 11:32:14 by mweverli      #+#    #+#                 */
/*   Updated: 2021/12/13 11:32:16 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *  @brief
 *  Will take in a char and if possible return the lowercase counterpart.
 *
 *  @param c
 *  @return int
 */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
