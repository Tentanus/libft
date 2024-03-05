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

/*	ft_isupper
 *		c	Character to be checked
 *
 * Function:
 * Will check if c is uppercase on the ASCII table, returning TRUE/FALSE
 *
 * RETURN VALUES:
 * [TRUE  / 1]	('A' <= c <= 'Z')
 * [FALSE / 0]	Any other value.
 */

int	ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
