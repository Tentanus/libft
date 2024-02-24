/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isspace.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 16:44:28 by mweverli      #+#    #+#                 */
/*   Updated: 2023/03/08 15:50:55 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** @brief
 *  Checks if c is a whitespace character on the ASCII table:
 * 
 *  @param c		Character to be checked.
 *  @return int		True if c is a whitespace character, false if not.
 **/

int	ft_isspace(int c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\r' || c == '\v')
		return (1);
	return (0);
}
