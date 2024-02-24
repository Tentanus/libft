/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_abs.c                                          :+:    :+:             */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/15 15:23:03 by mweverli      #+#    #+#                 */
/*   Updated: 2022/09/15 15:25:40 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *  @brief
 *  Will take a int32_t and if possible return absolute value.
 *
 *  @param a
 *  @return uint32_t
 */

int32_t	ft_abs(int32_t a)
{
	int32_t	ab;

	if (a < 0)
	{
		ab = a * -1;
		return (ab);
	}
	return (a);
}
