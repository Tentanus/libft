/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ispath.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/09 21:58:05 by mweverli      #+#    #+#                 */
/*   Updated: 2023/02/28 20:39:11 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*	ft_ispath
 *		c	Character to be checked
 *
 * Function:
 * Will check if c is a valid possibly Path Character, returning TRUE/FALSE
 *
 * RETURN VALUES:
 * [TRUE  / 1]	(character is the following sets: [0 - 9], [a - z], [A - Z], [-./_] )
 * [FALSE / 0]	Any other value.
 */

int	ft_ispath(int c)
{
	if ((c >= '-' && c <= '9') || (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z') || c == '_' || c == '~')
		return (1);
	return (0);
	
}
