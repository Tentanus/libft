/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/21 11:45:48 by mweverli      #+#    #+#                 */
/*   Updated: 2021/11/29 13:20:26 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *  @brief
 *  Takes a list, lst, and runs the ft_lstdelone over every node,
 *  deleting each node.
 *
 *  @param lst** locatoin of linked list of t_list
 *  @param del*  function to delete t_list node
 */

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*buff;

	while (*lst)
	{
		buff = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = buff;
	}
}
