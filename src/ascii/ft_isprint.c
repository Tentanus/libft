/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/13 11:27:18 by mweverli      #+#    #+#                 */
/*   Updated: 2023/03/08 15:50:29 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** @brief
 *  Checks if c is a printable character on the ASCII table:
 * 
 *  @param c		Character to be checked.
 *  @return int		True if c is a printable character, false if not.
 **/

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}
