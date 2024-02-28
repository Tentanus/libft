/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/16 10:44:41 by mweverli      #+#    #+#                 */
/*   Updated: 2021/12/13 15:13:29 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *  @brief
 *  Creates a new t_list node,
 *  setting it's content and setting the next pointer to NUL
 *
 *  @warning       Allocates Memory, is to be freed.
 *  @param content the content stored in the node.
 *  @return        the created node.
 */

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *) malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
