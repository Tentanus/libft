/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/13 11:28:41 by mweverli      #+#    #+#                 */
/*   Updated: 2023/02/28 20:35:46 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** @brief
 *  Checks if c is a character on the ASCII table:
 * 
 *  @param c		Character to be checked.
 *  @return int		True if c on the ASCII table, false if not.
 **/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
