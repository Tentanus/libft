/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/13 11:32:14 by mweverli      #+#    #+#                 */
/*   Updated: 2021/12/13 11:32:16 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	unsigned int	b;

	b = c;
	if (b >= 'A' && b <= 'Z')
		return (b + 32);
	return (c);
}
