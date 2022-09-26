/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ternary.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/26 15:44:12 by mweverli      #+#    #+#                 */
/*   Updated: 2022/09/26 15:44:40 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_ternary(int bol, int t, int f)
{
	if (bol)
		return (t);
	return (f);
}
