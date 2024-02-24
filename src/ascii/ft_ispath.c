/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ispath.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/09 21:58:05 by mweverli      #+#    #+#                 */
/*   Updated: 2023/02/28 20:39:11 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** @brief
 *  Checks if c is a path character on the ASCII table:
 *  @warning This is a non-POSIX compliant set.
 * 
 *  @param c		Character to be checked.
 *  @return int		True if c is a path character, false if not.
 **/

int	ft_ispath(int c)
{
	if (ft_isalnum(c) || (c >= '-' && c <= '/') || c == '_')
		return (1);
	return (0);
}
