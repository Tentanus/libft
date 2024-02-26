/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/21 11:06:23 by mweverli      #+#    #+#                 */
/*   Updated: 2021/12/12 15:12:32 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *  @brief
 *  Takes a node and runs the ft_lstdelone on it, deleting it,
 *
 *  @param node* node in linked list of t_list
 *  @param del*  function to delete t_list node
 */

void	ft_lstdelone(t_list *node, void (*del)(void*))
{
	if (del)
		del(node->content);
	node->next = NULL;
	free(node);
}
