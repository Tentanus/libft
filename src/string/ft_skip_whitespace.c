/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   skip_whitespace.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/10 15:19:30 by mweverli      #+#    #+#                 */
/*   Updated: 2023/02/10 15:21:49 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

int	ft_skip_whitespace(const char *str)
{
	int	i;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	return (i);
}
