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

/*	ft_ishex
 *		c	Character to be checked
 *
 * Function:
 * Will check if c is a hexadecimal character on the ASCII table
 * returning TRUE/FALSE
 *
 * RETURN VALUES:
 * [TRUE  / 1]	('0' <= c <= '9' || 'a' <= c <= 'f' || 'A' <= c <= 'F')
 * [FALSE / 0]	Any other value.
 */

int	ft_ishex(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f')
		|| (c >= 'A' && c <= 'F'))
		return (1);
	return (0);
}
