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

/*	ft_isspace
 *		c	Character to be checked
 *
 * Function:
 * Will check if c is a whitespace character on the ASCII table
 * returning TRUE/FALSE
 *
 * RETURN VALUES:
 * [TRUE  / 1]	(c == ' ' || c == '\n' || c == '\t' || c == '\r' || c == '\v')
 * [FALSE / 0]	Any other value.
 */

int	ft_isspace(int c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\r' || c == '\v')
		return (1);
	return (0);
}
