/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/13 11:28:25 by mweverli      #+#    #+#                 */
/*   Updated: 2023/03/07 19:46:14 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*	ft_isalpha
 *		c	Character to be checked
 *
 * Function:
 * Will check if c is alphabetic on the ASCII table, returning TRUE/FALSE
 *
 * RETURN VALUES:
 * [TRUE  / 1]	('a' <= c <= 'z' || 'A' <= c <= 'Z')
 * [FALSE / 0]	Any other value.
 */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
