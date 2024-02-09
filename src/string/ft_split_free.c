/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split_free.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/21 15:41:20 by mweverli      #+#    #+#                 */
/*   Updated: 2023/03/21 19:08:40 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_split_free(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i] != NULL)
		free(arr[i++]);
	free(arr);
	return ;
}
