/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/13 11:28:59 by mweverli      #+#    #+#                 */
/*   Updated: 2023/02/28 20:34:38 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*	ft_isdigit
 *		c	Character to be checked
 *
 * Function:
 * Will check if c is a the digit in the ASCII table, returning TRUE/FALSE
 *
 * RETURN VALUES:
 * [TRUE  / 1]	('0' <= c <= '9')
 * [FALSE / 0]	Any other value.
 */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
