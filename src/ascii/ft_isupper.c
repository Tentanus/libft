/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/31 11:28:25 by mweverli      #+#    #+#                 */
/*   Updated: 2023/03/31 17:37:53 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** @brief
 *  Checks if c is a uppercase character on the ASCII table:
 * 
 *  @param c		Character to be checked.
 *  @return int		True if c is a uppercase character, false if not.
 **/

int	ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
