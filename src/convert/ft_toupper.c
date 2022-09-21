/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/13 11:32:22 by mweverli      #+#    #+#                 */
/*   Updated: 2021/12/13 11:32:25 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	unsigned int	b;

	b = c;
	if (b >= 'a' && b <= 'z')
		return (b - 32);
	return (c);
}
