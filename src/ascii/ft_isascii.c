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

/*	ft_isascii
 *		c	Character to be checked
 *
 * Function:
 * Will check if c is on the ASCII table, returning TRUE/FALSE
 *
 * RETURN VALUES:
 * [TRUE  / 1]	('\0' <= c <= 127/DEL)
 * [FALSE / 0]	Any other value.
 */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
