/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ishex.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/05 14:12:46 by mweverli      #+#    #+#                 */
/*   Updated: 2023/03/08 15:50:10 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** @brief
 *  Checks if c is a hexadecimal character on the ASCII table:
 * 
 *  @param c		Character to be checked.
 *  @return int		True if c is a hexadecimal character, false if not.
 **/

int	ft_ishex(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f')
		|| (c >= 'A' && c <= 'F'))
		return (1);
	return (0);
}
