/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/13 11:28:05 by mweverli      #+#    #+#                 */
/*   Updated: 2023/02/28 20:39:11 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/** @brief
 *  checks if c is alphanumeric on the ASCII table:
 *
 *  @param c		Character to be checked.
 *
 *  @return int		True if c is alphanumeric, false if not.
 **/

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
