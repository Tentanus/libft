/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweverli <mweverli@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 21:03:17 by mweverli          #+#    #+#             */
/*   Updated: 2024/02/06 21:16:00 by mweverli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsubset(const char *str, const char *set)
{
	size_t len = ft_strlen(str);
	size_t i = 0;

	while (i != len)
	{
		if (!ft_strchr(set, str[i]))
			return ((char *)str + i);
		i++;
	}
	if (!ft_strchr(set, str[i]))
		return ((char *)str + i);
	return (NULL);
}
