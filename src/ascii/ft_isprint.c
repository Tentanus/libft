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

/*	ft_isprint
 *		c	Character to be checked
 *
 * Function:
 * Will check if c is a printable character on the ASCII table
 * returning TRUE/FALSE
 *
 * RETURN VALUES:
 * [TRUE  / 1]	(' ' <= c <= '~')
 * [FALSE / 0]	Any other value.
 */

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}
